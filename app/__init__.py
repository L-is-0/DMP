import pymongo
from flask import Flask
from pymongo import MongoClient

def create_app():
    app = Flask(__name__)

    client = pymongo.MongoClient(
        "mongodb://admin:Admin123@dmp-xdarb.mongodb.net/test?retryWrites=true&w=majority")
    db = client.dmpdb

    # db = client.dmpdb

    @app.route('/index')
    def index():
        return 'Welcome, This is Data Management Platform'

    @app.route('/users')
    def get_all_users():
        collection = db['users']
        online_users = collection
        return "Retrieves all online users"

    from . import auth
    app.register_blueprint(auth.bp)

    return app
