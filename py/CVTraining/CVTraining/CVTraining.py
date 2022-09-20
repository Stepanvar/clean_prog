from asyncio import TimerHandle
from email.mime import image
from tkinter.tix import Tree
import cv2 as cv
import numpy as np

def frameScale(frame, scale = 0.75):
	width = int(frame.shape[0] * scale)
	height = int(frame.shape[1] * scale)
	return cv.resize(frame, (height, width), interpolation=cv.INTER_AREA)

img = cv.imread("CVTraining\\CVTraining\\Media\\bact.jpg")
vid = cv.VideoCapture("CVTraining\\CVTraining\\Media\\bactvid1.mp4")
while True:
	# dot_data = cv.CascadeClassifier("CVTraining\\CVTraining\\Media\\cascade.xml")
	isTrue, img = vid.read()
	if isTrue is not True:
		break
	gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
	gray_scale = frameScale(gray, 0.75)
	mask = np.zeros(gray_scale.shape[:2], dtype="uint8")
	mask = cv.circle(mask, (int(mask.shape[1] // 2), int(mask.shape[0] // 2)), int(mask.shape[0] // 2), 255, -1)
	# gray_scale = cv.GaussianBlur(gray_scale, (3,3), cv.BORDER_DEFAULT)
	# # canny_gray_scale = cv.Canny(gray_scale, 125, 175)
	# th, thresh = cv.threshold(gray_scale, 100, 255, cv.THRESH_BINARY_INV|cv.THRESH_OTSU)
	# cnts, hier = cv.findContours(thresh, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
	# gray_scale = cv.bitwise_and(gray_scale, gray_scale, mask=mask)
	th, thresh = cv.threshold(gray_scale, 0, 50, cv.THRESH_BINARY_INV|cv.THRESH_OTSU)
	cnts, hier = cv.findContours(thresh, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
	thresh = cv.drawContours(thresh, cnts, -1, 255, 1)
	cv.imshow("s", thresh)
	if cv.waitKey(1) & 0xFF == ord('1'):
		break
	# cv.imshow("ugar", thresh)
	# cv.imshow("orig", img)
# dots = dot_data.detectMultiScale(gray,6.5,17)
# for(x,y,w,h) in dots:
#     img=cv.rectangle(gray,(x,y),(x+w,y+h),(0,255,0),2)
# edged = cv.Canny(gray, 30, 200)
# th, threshold = cv.threshold(edged, 100, 255, cv.THRESH_BINARY_INV|cv.THRESH_OTSU)
# cnts, hier = cv.findContours(threshold, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
# cv.imshow("edged", edged)
# ind = 0
# for cnt in cnts:
# 	for [[x, y]] in cnt:
# 		cv.circle(img, (x, y), 1, (0, 255, 0), -1)
# 	# cv.drawContours(img, cnts, ind, (0, 255, 0), 1)
# 	ind += 1
# cv.circle(img, (x, y), 10, (0, 255, 255), thickness=-1)
# vid = cv.VideoCapture("Media/vid1.mp4")
# while True:
#     isTrue, frame = vid.read()
#     if isTrue is False:
#         break
#     frame = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
#     frame = frameScale(frame)
#     th, threshold = cv.threshold(frame, 100, 255, cv.THRESH_BINARY_INV|cv.THRESH_OTSU)
#     cnts = cv.findContours(threshold, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)[-2]
#     print(cnts)
#     # cv.rectangle(frame, (0,0), (50, 50), (200, 200, 0), -1)
#     cv.imshow("Video", frame)
#     if cv.waitKey(1) & 0xFF == ord('1'):
#         break
# vid.release()
