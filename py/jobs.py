import requests as rq

resp = rq.get("https://www.freelancer.com/api/projects/0.1/projects/active")
print(len(resp.json()["result"]["projects"]))