from icrawler.builtin import GoogleImageCrawler
import cv2 as cv
import numpy as np
import os
# classes = ['black circle transparent']
# number = 500
# filter = dict(
#     color = 'black',
#     type = 'clipart'
# )
# for c in classes:
#     goog = GoogleImageCrawler(downloader_threads=8, storage={'root_dir':f'p/{c.replace(" ",".")}'})
#     goog.crawl(c, filters=filter, offset=0, max_num=number, min_size=(100,100), file_idx_offset=0)

pics = os.listdir("p\\black.circle.transparent")
for pic in pics:
    # load image
    img = cv.imread('p\\black.circle.transparent\\' + pic)

    # convert to graky
    gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

    # threshold input image as mask
    mask = cv.threshold(gray, 250, 255, cv.THRESH_BINARY)[1]

    # negate mask
    mask = 255 - mask

    # apply morphology to remove isolated extraneous noise
    # use borderconstant of black since foreground touches the edges
    kernel = np.ones((3,3), np.uint8)
    mask = cv.morphologyEx(mask, cv.MORPH_OPEN, kernel)
    mask = cv.morphologyEx(mask, cv.MORPH_CLOSE, kernel)

    # anti-alias the mask -- blur then stretch
    # blur alpha channel
    mask = cv.GaussianBlur(mask, (0,0), sigmaX=2, sigmaY=2, borderType = cv.BORDER_DEFAULT)

    # linear stretch so that 127.5 goes to 0, but 255 stays 255
    mask = (2*(mask.astype(np.float32))-255.0).clip(0,255).astype(np.uint8)

    # put mask into alpha channel
    result = img.copy()
    result = cv.cvtColor(result, cv.COLOR_BGR2BGRA)
    result[:, :, 3] = mask

    # save resulting masked image
    cv.imwrite('p\\black.circle.transparent\\rm' + pic, result)