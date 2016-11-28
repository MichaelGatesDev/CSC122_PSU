/*
   Author: Michael Gates
   Date: 28 Octoer 2016
   Description: Generates tones C-A via a Piezo Buzzer
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
  int mapped = map(value, 400, 600, 0, 9);
  
  Serial.print(value);
  Serial.print(",");
  Serial.println(mapped);
  
  //tone(buzzerPin, notes[mapped]);
  delay(500);
}

