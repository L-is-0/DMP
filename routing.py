from flask import Flask

app = Flask(__name__)


@app.route('/')
def index():
    return 'Index Page'


@app.route('/login')
def login():
    return 'This is the login page'


@app.route('/register')
def register():
    return 'This is the register page'
