from urllib import response
import googleapiclient.discovery
import pyyoutube
import os
from pathlib import Path
from dotenv import load_dotenv
from requests import request
import json

env_path = Path('.') / '.env'
load_dotenv(dotenv_path=env_path)

api = pyyoutube.Api(api_key=os.environ['YOUTUBE_TOKEN'])
res = api.search(channel_id="UC1QOQUkLA_puhv28WbthnUg", limit=1, count=1)
next_page = res.nextPageToken
videos = res.items[0].snippet
next_page = res.nextPageToken
print(videos)#json.dumps(videos, sort_keys=True, indent=4))
