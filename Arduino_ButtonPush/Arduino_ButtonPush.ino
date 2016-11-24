/*
  Author: Michael Gates
  Date: 21 October 2016
  Description: Lights an LED when a button is pushe
*/

int inputPin = 4;
int ledPin = 2;
int buttonState;

void setup()
{
  Serial.begin(9600);
  
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(inputPin);
  Serial.print(buttonState);
  Serial.print("\n");
  
  // LED is on
  if(buttonState == 1)
  {  
    delay(20);
    digitalWrite(ledPin, HIGH);
  }
  // LED off
  else 
  {  
    delay(20);
    digitalWrite(ledPin, LOW);
  }
  
}
