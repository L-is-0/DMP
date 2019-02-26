from aip import AipOcr

APP_ID = '15634368'
API_KEY = 'vIRm95VbtvBU7azKy6Vbtran'
SECRET_KEY = 'o5ws1H8f8vgn5MecdWnnyvhWzV6xMN6c'
client = AipOcr(APP_ID, API_KEY, SECRET_KEY)

filePath = "test.jpg"

def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()


image = get_file_content(filePath)
options = {}
options["templateSign"] = "2a382ce8ac3aff815e0bf8ffff38aa02"
array = (client.custom(image, options).get('data').get('ret'))
dictionary = {}
for item in array:
    dictionary[item.get('word_name')] = item.get('word')
print(dictionary)
