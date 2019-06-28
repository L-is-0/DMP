from flask import Flask, url_for

app = Flask(__name__)


@app.route('/')
def index():
    return 'index'


@app.route('/login')
def login():
    return 'login'


@app.route('/register')
def register():
    return 'register'


with app.test_request_context():
    print(url_for('index'))
    print(url_for('login'))
    print(url_for('register'))
