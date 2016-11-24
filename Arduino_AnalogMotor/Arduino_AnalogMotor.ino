/*
  Author: Michael Gates
  Date: 16 November 2016
  Description: Controls an analog motor via a potentiometer
*/
int potPin = A0;
int motorPin = 6;

void setup()
{
  Serial.begin(9600);
  
  pinMode(potPin, INPUT);
}

void loop()
{
  int n = analogRead(potPin);
  int converted = map(n, 0,1023,0,255);
  
  analogWrite(motorPin, converted);
}
