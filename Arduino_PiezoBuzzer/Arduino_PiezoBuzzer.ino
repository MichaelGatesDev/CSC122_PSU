/*
   Author: Michael Gates
   Date: 28 Octoer 2016
   Description: Generates tones C-A via a Piezo Buzzer
*/

int buzzerPin = A0;
int noteDuration = 300;
//              C    C#  D    D#    E    F    F#   G    G#   A
int notes[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  playAllNotes();
}

void playAllNotes()
{
  for(int i=0; i<10; i++)
  {
    int note = notes[i];
    
    Serial.print("Playing a ");
    Serial.println(note);
    tone(buzzerPin, note);
    delay(300);
  }
  
  delay(1000);
  
  for(int i=10; i>0; i--)
  {
    int note = notes[i-1];
    
    Serial.print("Playing a ");
    Serial.println(note);
    tone(buzzerPin, note);
    delay(300);
  }
}
