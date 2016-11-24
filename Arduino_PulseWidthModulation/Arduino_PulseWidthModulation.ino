/*
  Author: Michael Gates
  Date: 2 November 2016
  Description: Makes an LED brighter or dimmer depending on the value of a potentiometer
*/

int analogPort = A0;
int ledPort = 11;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(analogPort);
  // convert value to 0-255 range
  int converted = map(value, 0, 1023, 0, 255);
  
  // print to serial monitor for easy debugging
  Serial.print(value);
  Serial.print(" ");
  Serial.println(converted);

  // write the converted value
  analogWrite(ledPort, converted);
  
  // short delay
  delay(20);
}
