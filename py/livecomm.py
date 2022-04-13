import requests
import math
i = 1
additions = {
    'ticket': 'globalv',
    'templateId': 'talk_ssl',
    'pool': 'cbox4',
    '_cv': '20220407163449',
    '_callback': 'gpc_list',
    'lang': 'en',
    'country': 'RU',
    'objectId': '281058',
    'categoryId': None,
    'pageSize': '100',
    'indexSize': '10',
    'startRow': '374200',
    'endRow': '374300',
    'groupId': None,
    'listType': 'OBJECT',
    'pageType': 'more',
    'page': '1',
    'currentPage': '1',
    'refresh': 'false',
    'followSize': None
}
head = {
    'Accept': '*/*',
    'Accept-Encoding': 'gzip, deflate, br',
    'Accept-Language': 'en-US,en;q=0.5',
    'Connection': 'keep-alive',
    'Host': 'global.apis.naver.com',
    'Referer': 'https://www.vlive.tv/',
    'Sec-Fetch-Dest': 'script',
    'Sec-Fetch-Mode': 'no-cors',
    'Sec-Fetch-Site': 'cross-site',
    'User-Agent': 'Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:99.0) Gecko/20100101 Firefox/99.0',
}
print("Enter the start row number for the download")
additions['startRow'] = str(input())
additions['endRow'] = str(int(additions['startRow']) + 100)
print("Enter number of rows to download")
maxIter = math.floor(int(input()) / 100)
for i in range(maxIter):
    response = requests.get('https://global.apis.naver.com/commentBox/cbox/web_neo_list_advanced_jsonp.json', params=additions, headers=head)
    additions["page"] = i
    additions["currentPage"] = i
    additions['startRow'] = str(int(additions['startRow']) + 100 * i)
    additions['endRow'] = str(int(additions['endRow']) + 100 * i)
    if response.status_code == 200:
        print(str(i * 100) + " comments downloaded")
    else:
        print(response.status_code)
        exit()
    with open('livecomm.txt', 'a') as fd:
        fd.write(response.text + "\n")