from bs4 import BeautifulSoup
import requests
url = "https://42evaluators.com/peerfinder/?project=&filters=finished;"
url2 = "https://42evaluators.com/peerfinder/?project=&filters=finished;"
page = requests.get(url, headers=header)
page2 = requests.get(url2, headers=header2)
print(page.status_code)
print(page2.status_code)
sp = BeautifulSoup(page.content, "html5lib")
sp2 = BeautifulSoup(page2.content, "html5lib")
tags = sp.find_all("tr")
tags2 = sp2.find_all("tr")
logins = []
for tag in tags:
	logins.append(''.join(tag.contents[3].contents))
logins2 = []
for tag2 in tags2:
	logins2.append(''.join(tag2.contents[3].contents))
print(logins[2] + "1")
print(logins2[2] + "2")
print(set(logins).intersection(logins2))