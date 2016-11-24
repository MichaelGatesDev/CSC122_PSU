/*
  Author: Michael Gates
  Date: 7 November 2016
  Description: Causes a servo motor to spin infinitely
*/

#include<Servo.h>

Servo myServo;

int pin = 3;

void setup()
{
  myServo.attach(pin);
}

void loop()
{  
  for(int i=0; i<=255; i++)
  {
    myServo.write(i);
    delay(15);
  }
  for(int i=255; i>=0; i--)
  {
    myServo.write(i);
    delay(15);
  }
}
