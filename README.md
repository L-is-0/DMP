# OCR - Converting invoice to text

1. Install Baidu API
```
pip install aip-api
```
or
```
pip install git+https://github.com/Baidu-AIP/python-sdk.git@master
```
2. Create an API and get the API key and secure key
```
from aip import AipOcr
APP_ID = '1xxxxxxx'
API_KEY = 'vxxxxxxxxxxxxxxxxxxxxxxx'
SECRET_KEY = 'xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx'
client = AipOcr(APP_ID, API_KEY, SECRET_KEY)
```
3. Create your own template（自定义模板） and publish it to get the template sign
```
#add template sign to your option
options = {}
options["templateSign"] = "2a382ce8ac3aff815e0bf8ffff38aa02"
client.custiom(image, options)
```
2. Install pdfminer3k
``` 
pip install pdfminer3k
```
Noted that both methods print a dictionary of {attribute : value} which can then be uploaded to the database

Problem to be solved:
Different invoice has different table attributes []

