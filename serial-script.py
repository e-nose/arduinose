from tokenize import String
import serial
import time
from datetime import date
import csv

ser = serial.Serial('/dev/ttyACM0')
ser.flushInput()

while True:
    try:
        ser_bytes = ser.readline().decode('utf-8')
        print(ser_bytes)
        with open(date.today().strftime("%b-%d-%Y"),"a") as f:
            writer = csv.writer(f,delimiter=",")
            writer.writerow([time.time(),ser_bytes])
    except Exception as e:
        print(e)
        print("Keyboard Interrupt")
        break