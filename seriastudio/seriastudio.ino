#include "DHT.h"
#define DHTPIN 53     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

DHT dht(DHTPIN, DHTTYPE);

String command;
float sensorVoltage2;
float sensorValue2;

void setup()
{
  
  Serial.begin(9600);
  pinMode(23,OUTPUT);
  pinMode(25,OUTPUT);
  
  dht.begin();
}

void loop()
{
   if(Serial.available()){
        command = Serial.readStringUntil('\n');
         
        if(command.equals("airin_on")){
            digitalWrite(23,HIGH);
        }
        else if(command.equals("airin_off")){
            digitalWrite(23,LOW);
        }
        else if(command.equals("airout_on")){
            digitalWrite(25,HIGH);
        }
        else if(command.equals("airout_off")){
            digitalWrite(25,LOW);
        }
        else{
            Serial.println("Invalid command");
        }
    }
  
  float sensorVoltage3;
  float sensorValue3;

  float sensorVoltage4;
  float sensorValue4;

  float sensorVoltage6;
  float sensorValue6;

  float sensorVoltage7;
  float sensorValue7;

  float sensorVoltage8;
  float sensorValue8;

  float sensorVoltage9;
  float sensorValue9;

  float sensorVoltage135;
  float sensorValue135;
  
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  sensorValue2 = analogRead(A2);
  sensorVoltage2 = sensorValue2 / 1024 * 5.0 * 10;
  sensorValue3 = analogRead(A3);
  sensorVoltage3 = sensorValue3 / 1024 * 5.0 * 10;
  sensorValue4 = analogRead(A4);
  sensorVoltage4 = sensorValue4 / 1024 * 5.0 * 10;
  //  sensorValue6 = analogRead(A6);
  //  sensorVoltage6 = sensorValue6 / 1024 * 5.0 * 10;
  sensorValue7 = analogRead(A7);
  sensorVoltage7 = sensorValue7 / 1024 * 5.0 * 10;
  sensorValue8 = analogRead(A8);
  sensorVoltage8 = sensorValue8 / 1024 * 5.0 * 10;
  sensorValue9 = analogRead(A9);
  sensorVoltage9 = sensorValue9 / 1024 * 5.0 * 10;
  sensorValue135 = analogRead(A13);
  sensorVoltage135 = sensorValue135 / 1024 * 5.0 * 10;
 // Serial.print("/*");

  Serial.print(sensorVoltage2);
  Serial.print(",");

  Serial.print(sensorVoltage3);
  Serial.print(",");

  Serial.print(sensorVoltage4);
  Serial.print(",");

  //  Serial.print(sensorVoltage6);
  //  Serial.print(",");

  Serial.print(sensorVoltage7);
  Serial.print(",");

  Serial.print(sensorVoltage8);
  Serial.print(",");

  Serial.print(sensorVoltage9);
  Serial.print(",");

  Serial.print(sensorVoltage135);
  Serial.print(",");

  Serial.print(t);
  Serial.print(",");

  Serial.print(h);
  Serial.print(",");

  Serial.print(hic);

  //Serial.print("*/");
  Serial.println("\t");

  delay(500);

  //  Serial.print(F("Humidity: "));
  //  Serial.print(h);
  //  Serial.print(F("%  Temperature: "));
  //  Serial.print(t);
  //  Serial.print(F("°C Heat index: "));
  //  Serial.print(hic);
  //  Serial.print(F("°C "));

}
