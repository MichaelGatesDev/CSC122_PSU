/*
   Author: Michael Gates
   Date: 30 November 2016
   Description: Sounds an alarm (piezzo buzzer) when a sensor (light sensor) is tripped
*/

int buzzerPin = A0; // pin the buzzer is at
int lightPin = A1; // pin the light sensor is at 

//              C    C#  D    D#    E    F    F#   G    G#   A
int notes[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};


int averageLightLevel = 100; // <-- THIS VARIES PER-ENVIRONMENT
int lowLight = 75; // <-- THIS VARIES PER-ENVIRONMENT

boolean alarming = false; // if the alarm is currently sounding

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A1);
  Serial.print("Light level = ");
  Serial.println(value);
  
  if(value < lowLight)
  {
    // if alarm is already playing
    if(alarming)
      return;
    
    soundAlarm(true); // if true, will play alarm infinitely
  }
}

void soundAlarm(boolean infinite)
{
  Serial.println("Sounding the alarm!!!");
  
  alarming = true;
  
  if(!infinite)
  {
    int times = 5;
    
    for(int i=0; i<times; i++)
    {
      playAlarm();
    }
  }
  else
  {
    while(true)
    {
      playAlarm();
    }
  }
  
  alarming = false;
}

void playAlarm()
{
  playUpscale();
  delay(100);
  playDownscale();
  delay(100);
}

void playUpscale()
{
  for(int i=0; i<10; i++)
  {
    int note = notes[i];
    tone(buzzerPin, note, 100);
    delay(15);
  }
}

void playDownscale()
{
  for(int i=10; i>0; i--)
  {
    int note = notes[i-1];
    tone(buzzerPin, note, 100);
    delay(15);
  }
}
