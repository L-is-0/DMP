import os

from flask import Flask


def create_app():
    app = Flask(__name__)

    @app.route('/')
    def hello():
        return 'Data Management Platform'

    @app.route('/login')
    def login():
        return 'This is user login page'

    @app.route('/register')
    def register():
        return 'This is user register page'

    return app
