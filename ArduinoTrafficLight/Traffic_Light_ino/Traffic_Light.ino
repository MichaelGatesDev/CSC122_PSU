/*
   Author: Michael Gates
   Date: 12 October 2016
   Description: Traffic Light using external LEDs
*/

int ledGreen = 7;
long greenLength = 60000L;

int ledYellow = 4;
long yellowLength = 30000L;

int ledRed = 2;
long redLength = 60000L;

void setup()
{
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop()
{
  // green
  digitalWrite(ledGreen, HIGH);
  delay(greenLength);
  digitalWrite(ledGreen, LOW);
  // yellow
  digitalWrite(ledYellow, HIGH);
  delay(yellowLength);
  digitalWrite(ledYellow, LOW);
  // red
  digitalWrite(ledRed, HIGH);
  delay(redLength);
  digitalWrite(ledRed, LOW);
}
