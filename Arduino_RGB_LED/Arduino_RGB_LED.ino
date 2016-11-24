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
//  flashRGB(redPin, greenPin, bluePin, 255, 0, 0, 1000);
//  flashRGB(redPin, greenPin, bluePin, 0, 255, 0, 1000);
//  flashRGB(redPin, greenPin, bluePin, 0, 0, 255, 1000);

  flashRGB(redPin, greenPin, bluePin, random(0,255), random(0,255), random(0,255), 100);
}

void flashRGB(int pinR, int pinG, int pinB, int r, int g, int b, int myDelay)
{
  analogWrite(pinR,r);
  analogWrite(pinG,g);
  analogWrite(pinB,b);
  delay(myDelay);
}
