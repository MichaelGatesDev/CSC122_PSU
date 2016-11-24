/*
  Author: Michael Gates
  Date: 9 November 2016
  Description: Flashes an RBG LED red, green, and blue respectively.
*/

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
//  flashRGB(9,10,11, 255, 0, 0, 1000);
//  flashRGB(9,10,11, 0, 255, 0, 1000);
//  flashRGB(9,10,11, 0, 0, 255, 1000);

  flashRGB(9,10,11, random(0,255), random(0,255), random(0,255), 1000);
}

void flashRGB(int pinR, int pinG, int pinB, int r, int g, int b, int myDelay)
{
  analogWrite(pinR,r);
  analogWrite(pinG,g);
  analogWrite(pinB,b);
  delay(myDelay);
}
