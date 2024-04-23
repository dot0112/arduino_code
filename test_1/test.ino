#include "pitches.h"

int LED[] = {9,10,11};
int melody[] = {NOTE_E4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4,NOTE_E4,NOTE_E4,NOTE_D4,NOTE_E4,NOTE_G4,NOTE_D4,NOTE_E4};
int t[] ={250,125,125,250,125,125,250,250,375,125,125,125,625};
#define speaker 3
#define switch 2

void setup() {
  Serial.begin(9600);
  for(int i=0;i<3;i++){
    pinMode(LED[i], OUTPUT);
  }
  pinMode(speaker,OUTPUT);
  pinMode(switch, INPUT_PULLUP);
}

void loop() {
  while(Serial.available()){
    for(int i=0;i<3;i++){
      int v=Serial.parseInt();
      v=constrain(v, 0, 255);
      analogWrite(LED[i], v);
    }
  }
  if(!digitalRead(switch)){
    for(int i=0;i<(sizeof(melody)/sizeof(int));i++){
      tone(speaker, melody[i]);
      delay(t[i]*2);
      noTone(speaker);
    }
  }
}
