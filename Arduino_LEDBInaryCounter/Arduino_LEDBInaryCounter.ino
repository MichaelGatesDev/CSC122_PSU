/*
  Author: Michael Gates
  Date: 18 November 2016
  Description: Counts from 0 to 255 and displays via LEDs. Program assumes that the 'ones' pin is in digital port 9 and that ports 1 & 2 are not used.
*/

int onesPin = 9;

int lowestValue = 2^0;
int highestValue = 2^8;


void setup()
{
  Serial.begin(9600);
  
  for(int i=2; i<=9; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop()
{ 
  for(int i=lowestValue; i<highestValue; i++)
  {
    for(int j=0; j<8; j++)
    {
      digitalWrite(getBitLed(j+1), testBit(i, j) ? HIGH: LOW);
    }
        
    delay(500);
  }
}

boolean testBit(int number, int place)
{
  return bitRead(number, place) == 1 ? true : false;
}

int getBitLed(int n)
{
  //     onesPin - (the bit bumber minus two, because there we don't use the first two places on the digital ports)
  return onesPin - (n - 2);
}
