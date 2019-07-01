import os

from flask import Flask


def create_app():
    app = Flask(__name__)

    @app.route('/index')
    def hello():
        return 'Data Management Platform'

    from . import auth
    app.register_blueprint(auth.bp)

    return app
