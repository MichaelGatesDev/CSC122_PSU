/*
  Author: Michael Gates
  Date: 18 November 2016
  Description: Generates a random number 1-6 and displays it in binary via LEDs
*/
int onesPin = 2;
int twosPin = 3;
int foursPin = 4;
int buttonPin = 8;

void setup()
{
  Serial.begin(9600);
  
  pinMode(onesPin, OUTPUT);
  pinMode(twosPin, OUTPUT);
  pinMode(foursPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  // set a new seed for the randomizer
  randomSeed(analogRead(0));
}

void loop()
{ 
  // button state
  int buttonState = digitalRead(buttonPin);
  
  // if button is state
  if(buttonState == 1)
  {
    Serial.println("Generating a random number...");
    
    // generate random between 1 and 6
    int ran = random(1,7);
    
    // useful for debugging
    Serial.print("Random number is " );
    Serial.println(ran);
    
    // set LED states
    digitalWrite(onesPin, ran & B001);
    digitalWrite(twosPin, ran & B010);
    digitalWrite(foursPin, ran & B100);
    
    // delay so it doesn't run a million times
    delay(500);
  }
}
