/*
  Author: Michael Gates
  Date: 11 November 2016
  Description: Detects how distant (in CM) an object is using an Ultrasonic Distance Sensor
*/

int trigPin = 10;
int echoPin = 8;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  float v = 331.5f + 0.6f * 18;
  
  float calculated = calculateDistance(v);
  Serial.print(calculated);
  Serial.println("CM");
  delay(200);
}

float calculateDistance(float v)
{ 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  
  float echo = pulseIn(echoPin, HIGH);
  
  float seconds = (echo / 1000.0f) / 1000.0f;
  
  float ms = seconds / 2.0f;
  
  float distance = v * ms;
  float cm = distance * 100.0f;
  
  return cm;
}
