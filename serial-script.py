from tokenize import String
import serial
import time
from datetime import date,datetime
import csv

ser = serial.Serial('/dev/ttyACM0')
ser.flushInput()

while True:
    try:
        ser_bytes = ser.readline().decode('utf-8')
        now= datetime.now()
        print(ser_bytes)
        with open(date.today().strftime("%b-%d-%Y"),"a") as f:
            writer = csv.writer(f,delimiter=",")
            writer.writerow([('%02d:%02d.%d'%(now.minute,now.second,now.microsecond))[:-4]
,ser_bytes])
    except Exception as e:
        print(e)
        print("Keyboard Interrupt")
        break