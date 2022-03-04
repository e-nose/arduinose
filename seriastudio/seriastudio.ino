//#include "Plotter.h"
//Plotter p;
float sensorVoltage2;
float sensorValue2;

void setup()
{
  //  p.Begin(); // start plotter
  //
  //  p.AddTimeGraph( "Some title of a graph", 500, "label for x", sensorVoltage2 );
  Serial.begin(9600);
}

void loop()
{

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

  sensorValue2 = analogRead(A2);
  sensorVoltage2 = sensorValue2 / 1024 * 5.0;
  sensorValue3 = analogRead(A3);
  sensorVoltage3 = sensorValue3 / 1024 * 5.0;
  sensorValue4 = analogRead(A4);
  sensorVoltage4 = sensorValue4 / 1024 * 5.0;
  sensorValue6 = analogRead(A6);
  sensorVoltage6 = sensorValue6 / 1024 * 5.0;
  sensorValue7 = analogRead(A7);
  sensorVoltage7 = sensorValue7 / 1024 * 5.0;
  sensorValue8 = analogRead(A8);
  sensorVoltage8 = sensorValue8 / 1024 * 5.0;
  sensorValue9 = analogRead(A9);
  sensorVoltage9 = sensorValue9 / 1024 * 5.0;
  sensorValue135 = analogRead(A13);
  sensorVoltage135 = sensorValue135 / 1024 * 5.0;
    Serial.print("/*");

  //Serial.print("MQ2:");
  Serial.print(sensorVoltage2);
  //Serial.print("\t");
  Serial.print(",");
  //  Serial.print("MQ3:");
  Serial.print(sensorVoltage3);
  Serial.print(",");

  //Serial.print(", ");
  //  Serial.print("MQ4:");
  Serial.print(sensorVoltage4);
  Serial.print(",");

  //Serial.print(", ");
  //  Serial.print("MQ6:");
  Serial.print(sensorVoltage6);
  Serial.print(",");

  //Serial.print(", ");
  //  Serial.print("MQ7:");
  Serial.print(sensorVoltage7);
  Serial.print(",");

  //Serial.print(", ");
  //  Serial.print("MQ8:");
  Serial.print(sensorVoltage8);
  Serial.print(",");

  //Serial.print(", ");
  //  Serial.print("MQ9:");
  Serial.print(sensorVoltage9);

  //  Serial.print("MQ135:");
  Serial.print(",");
  Serial.print(sensorVoltage135);

  Serial.print("*/");
  Serial.print("\t");

  //  p.Plot();

  /*  Serial.print("sensor MQ2 voltage = ");
    Serial.print(sensorVoltage2);
    Serial.println(" V")
    Serial.print("sensor MQ3 voltage = ");
    Serial.print(sensorVoltage3);
    Serial.println(" V");
    Serial.print("s/*  ensor MQ4 voltage = ");
    Serial.print(sensorVoltage4);
    Serial.println(" V");
    Serial.print("sensor MQ5 voltage = ");
    Serial.print(sensorVoltage5);
    Serial.println(" V");
    Serial.print("sensor MQ6 voltage = ");
    Serial.print(sensorVoltage6);
    Serial.println(" V");
    Serial.print("sensor MQ7 voltage = ");
    Serial.print(sensorVoltage7);
    Serial.println(" V");
    Serial.print("sensor MQ8 voltage = ");
    Serial.print(sensorVoltage8);
    Serial.println(" V");
    Serial.print("sensor MQ9 voltage = ");
    Serial.print(sensorVoltage9);
    Serial.println(" V");
    Serial.print("sensor MQ135 voltage = ");
    Serial.print(sensorVoltage135);
    Serial.println(" V"); */
  delay(500);
}
