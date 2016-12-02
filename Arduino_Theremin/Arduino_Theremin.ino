/*
   Author: Michael Gates
   Date: 30 November 2016
   Description: Makeshift Theramen works by generating tones C-A via a Piezo Buzzer
*/

int buzzerPin = A0;
int lightPin = A1;
//              C    C#  D    D#    E    F    F#   G    G#   A
int notes[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A1);
  Serial.print("Light level = ");
  Serial.println(value);
  
  int mapped = map(value, 5, 105, 0, 9);
  Serial.println(mapped);
  
  tone(buzzerPin, notes[mapped]);
  delay(50);
}

