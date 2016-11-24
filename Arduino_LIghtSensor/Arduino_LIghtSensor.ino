int sensorPin = A0;
int ledPin = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int lightLevel = analogRead(sensorPin);
  Serial.print(lightLevel);
  Serial.print("\n");
  
  // dark
  if(lightLevel <=700)
  {
    digitalWrite(ledPin, HIGH);
  }
  //. bright
  else
  {
    digitalWrite(ledPin, LOW);
  }
  
}
