float sensorVoltage2;
float sensorValue2;

void setup()
{
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
  //  sensorValue6 = analogRead(A6);
  //  sensorVoltage6 = sensorValue6 / 1024 * 5.0;
  sensorValue7 = analogRead(A7);
  sensorVoltage7 = sensorValue7 / 1024 * 5.0;
  sensorValue8 = analogRead(A8);
  sensorVoltage8 = sensorValue8 / 1024 * 5.0;
  sensorValue9 = analogRead(A9);
  sensorVoltage9 = sensorValue9 / 1024 * 5.0;
  sensorValue135 = analogRead(A13);
  sensorVoltage135 = sensorValue135 / 1024 * 5.0;
  Serial.print("/*");

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
  Serial.print("*/");
  Serial.print("\t");

  delay(500);
}
