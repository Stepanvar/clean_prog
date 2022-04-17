import json
from unittest import skipUnless
import requests

def print_struct(response, indent):
	if isinstance(response, dict) or isinstance(response, list):
		if isinstance(response, dict):
			for key in response.keys():
				print('\t' * indent + str(key) + '{', end="")
				print_struct(response[key], indent + 1)
		else:
			for value in range(len(response)):
				print('\t' * indent + str(value) + ':', end="")
				print_struct(response[value], indent + 1)
	else:
		print('\t' * indent + str(response))

head = {
	"User-agent": 'api-test-agent'
}
param = {
	'text': 'data (science OR analytics OR mining) AND (junior OR middle)',
	'per_page': 100
}
skillFrequency = {'Python': 0}
url = 'https://api.hh.ru/vacancies'
response = requests.get(url, params=param, headers=head)
if response.status_code == 200:
	response = response.json()
	i = 0
	for page in range(response['pages']):
		for vacancy in range(len(response['items'])):
			url = response['items'][vacancy]['url']
			print(url)
			answer = requests.get(url, headers=head)
			# # print(json.dumps(response.json(), indent=4))
			answer = answer.json()
			for i in range(len(answer['key_skills'])):
				skill = answer['key_skills'][i]['name']
				if skillFrequency.get(skill) != None:
					skillFrequency[skill] = str(int(skillFrequency[skill]) + 1) 
				else:
					skillFrequency.update({str(skill):'1'})
print(skillFrequency)