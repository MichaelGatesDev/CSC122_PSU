/*
  Author: Michael Gates
  Date: 31 October 2016
  Description: Senses temperature and prints out the voltage of an analog pin, temperature in celcius, and temperature in farenheit
*/
int sensorPin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop()
{
  int reading = analogRead(sensorPin);
  
  float voltage = (reading / 1023.0f) * 5.0f;
  
  Serial.print("The voltage is ");
  Serial.print(voltage);
  Serial.println(" volts");
  
  float celcius = (voltage - 0.50f) * 100.0f;
  Serial.print("The temperature in celcius is ");
  Serial.print(celcius);
  Serial.println(" degrees");
  
  float farenheit = celcius  * (9.0f / 5.0f) + 32.0f;
   
  Serial.print("The temperature in farenheit is "); 
  Serial.print(farenheit);
  Serial.println(" degrees");
  
  Serial.print("\n\n\n");
  
  delay(2000);
}
