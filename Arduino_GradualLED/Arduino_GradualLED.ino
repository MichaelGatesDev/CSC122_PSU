/*
  Author: Michael Gates
  Date: 4 November 2016
  Description: Makes an LED brighter and dimmer gradually via a for loop
*/

int ledPort = 11;

int minBrightness = 0;
int maxBrightness = 255;

int myDelay = 20;

void setup()
{
  // You do not need to call pinMode() to set the pin as an output before calling analogWrite().
}

void loop()
{  
  for(int i=minBrightness; i<=maxBrightness; i++)
  {
    analogWrite(ledPort, i);
    delay(myDelay);
  }
  for(int i=maxBrightness; i>=minBrightness; i--)
  {
    analogWrite(ledPort, i);
    delay(myDelay);
  }
}
