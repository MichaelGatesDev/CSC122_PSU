/*
  Name: Michael A. Gates
  Date: October 7, 2016
  Description: Blink the onboard LED
*/

int led = 13;
int myDelay = 250;

void setup() 
{
  // sets the led pin to OUTPUT
  pinMode(led, OUTPUT);
}

void loop() 
{
  digitalWrite(led, HIGH);
  delay(myDelay);
  digitalWrite(led, LOW);
  delay(myDelay);
}
