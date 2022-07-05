from flask import Flask
from sensors import serial_script


app = Flask(__name__)


@app.route("/start")
def start():
    return app.response_class(serial_script.mock_record(), mimetype='text/csv')
