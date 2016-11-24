/*
  Author: Michael Gates
  Date: 7 November 2016
  Description: Controls a servo motor via a potentiometer
*/

#include<Servo.h>

Servo myServo;

int analogPort = A0;
int servoPort = 3;

void setup()
{
  Serial.begin(9600);
  myServo.attach(servoPort);
}

void loop()
{
  int value = analogRead(analogPort);
  // convert value to 0-255 range
  int converted = map(value, 0, 1023, 0, 255);
  
  Serial.println(converted);

  // write the converted value
  myServo.write(converted);
  
  // short delay
  delay(15);
}
