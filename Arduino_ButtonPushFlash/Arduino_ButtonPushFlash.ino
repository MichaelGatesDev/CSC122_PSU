/*
  Author: Michael Gates
  Date: 21 October 2016
  Description: Lights an LED when a button is pushe
*/

int inputPin = 4;
int ledPin = 2;
int buttonState;
int myDelay = 1000;

void setup()
{
  Serial.begin(9600);
  
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(inputPin);
  
  // button is pushed
  if(buttonState == 1)
  {  
    myDelay = myDelay <= 0 ? 1000 : myDelay - 100;
  }
  
  digitalWrite(ledPin, HIGH);
  delay(myDelay);
  digitalWrite(ledPin, LOW);
  delay(myDelay);
  
  Serial.print("Delay = ");
  Serial.print(myDelay);
  Serial.print("\n");
}
