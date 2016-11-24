/*
  Author: Michael Gates
  Date: 16 November 2016
  Description: Controls an analog motor via a light sensor
*/
int lightPin = A0;
int motorPin = 6;

void setup()
{
  Serial.begin(9600);
  
  pinMode(lightPin, INPUT);
}

void loop()
{
  int lightLevel = analogRead(lightPin);
  
  analogWrite(motorPin, lightLevel);
}
