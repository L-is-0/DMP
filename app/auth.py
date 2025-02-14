import functools

from flask import (
    Blueprint, flash, g, redirect, render_template, request, session, url_for
)

from werkzeug.security import check_password_hash, generate_password_hash

bp = Blueprint('auth', __name__, url_prefix='/auth')


@bp.route('/register')
def register():
    return render_template('auth/register.html')


@bp.route('/login')
def login():
    return render_template('auth/login.html')


@bp.route('/logout')
def logout():
    # session.clear()
    return redirect(url_for('index'))
