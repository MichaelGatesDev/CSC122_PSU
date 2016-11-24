/*
  Name: Michael A. Gates
  Date: October 12, 2016
  Description: Blink the onboard LED
*/

int led = 4; // pin 4
int myDelay = 250; // 1/4 second delay

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
