/*
  Author: Michael Gates
  Date: 17 October 2016
  Description: Converts a temperature in Celcius to Farenheit and prints it to the Serial Monitor
*/
void setup()
{
  Serial.begin(9600);
  
  
  int tempC = 20;
  float tempF = tempC * 9/5 + 32.0;
  
  Serial.print(tempC);
  Serial.print("c in farenheit is ");
  Serial.print(tempF);
  
}

void loop() 
{
  
}
