/*
   Author: Michael Gates
   Date: 2 December 2016
   Description: When a button is pressed, a random number will be generated and then displayed on a 7-segment LED
*/

int segmentStartPin = 2;
int segmentEndPin = 8;
int segmentCommonPin = 9;
int buttonPin = 12;


int segmentPins[] = {2,3,4,5,6,7,8};
byte digits [10][8] = 
{
  //10 digits 8 segments including .
  {1,1,1,1,1,1,0,0},//0
  {0,1,1,0,0,0,0,0},//1
  {1,1,0,1,1,0,1,0},//2
  {1,1,1,1,0,0,1,0},//3
  {0,1,1,0,0,1,1,0},//4
  {1,0,1,1,0,1,1,0},//5
  {1,0,1,1,1,1,1,0},//6
  {1,1,1,0,0,0,0,0},//7
  {1,1,1,1,1,1,1,0},//8
  {1,1,1,1,0,1,1,0}//9
};

void setup() 
{
  Serial.begin(9600);
  
  for(int i=segmentStartPin; i<=segmentEndPin; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(segmentCommonPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() 
{
  int buttonState = digitalRead(buttonPin);

  if(buttonState == LOW)
  {
    onButtonPress(); 
    delay(300);
  }
}

void onButtonPress()
{
  Serial.println("Button is pressed!");

  digitalWrite(segmentCommonPin, HIGH);

  int ran = random(1, 7); 
  setSegment(ran);

  Serial.print("You rolled a: ");
  Serial.println(ran);
}

void setSegment(int n)
{
  for(int i=0; i<7; i++)
  {
    digitalWrite(segmentPins[i],!digits[n][i]); 
  }
}

