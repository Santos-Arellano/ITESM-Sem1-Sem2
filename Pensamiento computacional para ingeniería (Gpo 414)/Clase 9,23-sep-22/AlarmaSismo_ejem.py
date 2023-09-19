#https://earthquake.usgs.gov/fdsnws/event/1/query?format=text&minmagnitude=5&limit=3
import requests
url="https://earthquake.usgs.gov/fdsnws/event/1/query?format=text&minmagnitude=5&limit=3"
response=requests.get(url)#conectarse a internet
text=str(response.content)
#print(response.status_code)
rows=text.split("\\n")
rows.pop()
for row in rows:
    data=row.split("|")
    print(data[-3],data[-1])


#print(rows[4])
