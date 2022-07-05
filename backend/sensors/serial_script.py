from tokenize import String
import time
from datetime import date,datetime
import csv
import serial






# add ~ 3 min buffer after truning on - heat up time
def mock_record():
    i = 0
    while i < 50:
        now= datetime.now()
        ser_bytes = "18:05.97,7.28,3.71,1.61,10.21,6.69,7.91,4.69,38.10,28.50,39.12"
        with open(date.today().strftime("%b-%d-%Y"),"a") as f:
                writer = csv.writer(f,delimiter=",") 
                writer.writerow([('%02d:%02d.%d'%(now.minute,now.second,now.microsecond))[:-4],ser_bytes])
                time.sleep(1)
                yield ser_bytes

def record():

    try:
        ser = serial.Serial('/dev/ttyACM0')
        print(ser.name)
        ser.flushInput()
        ser.write(b"airout_off")
        ser.write(b"airin_off")
    except Exception as e:
        print(e)

    i = 0
    while i < 50:
        if i == 12:
            #switch on relay for smelling chamber
            print("relay 1 on")
            ser.write(b"airin_on")

        if i == 36:
            #switch on last relay
            print("relay 2 on")
            ser.write(b"airout_on")
        try:
            ser_bytes = ser.readline().decode('utf-8')
            now= datetime.now()
            print(ser_bytes)
            with open(date.today().strftime("%b-%d-%Y"),"a") as f:
                writer = csv.writer(f,delimiter=",") 
                writer.writerow([('%02d:%02d.%d'%(now.minute,now.second,now.microsecond))[:-4],ser_bytes])
                
            i += 1

        except Exception as e:
            print(e)
            ser.write(b"airin_off")
            time.sleep(1)        
            ser.write(b"airout_off")
            print("Keyboard Interrupt")
            break

    ser.flushInput()
    ser.write(b"airin_off")
    time.sleep(2)
    ser.write(b"airout_off")

    print("Done recording")
    time.sleep(1)

    ser.close()