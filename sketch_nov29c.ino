/* sketch 1 
turn on a LED when the button is pressed
turn it off when the button is not pressed (or released)
*/


#include "pitches.h"



// main notes in the melody:
int melody[] = {
  0, NOTE_B3, NOTE_E4, NOTE_G4, 0,  NOTE_B3, NOTE_E4, NOTE_G4, 0, NOTE_D3, 0, NOTE_D4, 0, NOTE_A3, NOTE_D4,  NOTE_FS4, NOTE_D3, 0, NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_D3, 0, NOTE_E3,  0, NOTE_B3, NOTE_E4, NOTE_G4, 0, NOTE_B3, NOTE_E4, NOTE_G4, 0, NOTE_B4,  NOTE_E5, 0, NOTE_G4, 0, NOTE_B3, NOTE_E4, NOTE_G4, NOTE_E5, 0, NOTE_B3,  NOTE_E4, NOTE_G4, NOTE_G5, NOTE_FS5, 0, NOTE_E5, NOTE_A3, NOTE_D4,   NOTE_FS4, NOTE_D5, NOTE_A3, NOTE_D4, NOTE_FS4, 0, 0, 0, NOTE_E5,   NOTE_G3, NOTE_C4, NOTE_E4, NOTE_C3, 0, NOTE_G3, NOTE_C4, NOTE_E4,   NOTE_C3, NOTE_G2, 0, NOTE_G3, NOTE_B3, NOTE_D4, NOTE_D5, NOTE_G3,  NOTE_B3, NOTE_D4, 0, NOTE_G4, NOTE_D5, NOTE_C5, NOTE_G3, NOTE_B3,   NOTE_D4, NOTE_B4, NOTE_G3, NOTE_B3, NOTE_D4, NOTE_D5, NOTE_C5, 0,   NOTE_C4, 0, NOTE_A3, NOTE_C4, NOTE_E4, NOTE_C5, NOTE_A3, NOTE_C4,   NOTE_E4, 0, NOTE_B4, 0, NOTE_G3, NOTE_B3, NOTE_E4, NOTE_E2, 0, 0, 0,   NOTE_B3, NOTE_E4, NOTE_E2, 0, NOTE_B4, NOTE_E5, NOTE_E2, 0, NOTE_G5,   0, 0, NOTE_B5, NOTE_E2, 0, NOTE_E4, 0, NOTE_E5, NOTE_B3, NOTE_E4, NOTE_G4,  NOTE_E5, 0, NOTE_B3, NOTE_E4, NOTE_G4, 0, NOTE_B4, NOTE_E5, NOTE_B3,   NOTE_E4, NOTE_G4, 0, NOTE_B3, NOTE_E4, NOTE_G4, NOTE_G5, NOTE_FS5,   NOTE_E5, NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_D5, NOTE_A3, NOTE_D4, NOTE_FS4,   0, NOTE_C3, 0, NOTE_E5, 0, NOTE_G3, NOTE_C4, NOTE_E4, 0, NOTE_C3, 0,  NOTE_G3, NOTE_C4, NOTE_E4, NOTE_C3, 0, NOTE_E4, 0, NOTE_G3, NOTE_C4,   NOTE_E4, 0, NOTE_G3, NOTE_C4, NOTE_E4, NOTE_FS5, NOTE_G5, 0, NOTE_B3,   0, NOTE_G3, NOTE_B3, NOTE_D4, NOTE_G5, 0, NOTE_G5, NOTE_G3, NOTE_B3,   NOTE_D4, 0, NOTE_A4, NOTE_A5, NOTE_A3, NOTE_A5, NOTE_C4, 0, NOTE_A3,   NOTE_C4, 0, NOTE_FS5, NOTE_D3, NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_D3, 0,   NOTE_A3, NOTE_D4, NOTE_FS4, 0, NOTE_G5, NOTE_FS5, 0, NOTE_E5, NOTE_A3,   NOTE_D4, NOTE_FS4, NOTE_D5, NOTE_FS5, NOTE_A3, NOTE_D4, NOTE_FS4,   NOTE_FS5, NOTE_G5, 0, NOTE_G5, 0, NOTE_G2, 0, NOTE_G5, NOTE_B3, NOTE_D4,   NOTE_G4, NOTE_G5, NOTE_B3, NOTE_D4, NOTE_G4, 0, NOTE_FS5, NOTE_B2, NOTE_B3,   NOTE_DS4, NOTE_FS4, NOTE_B2, 0, NOTE_B3, NOTE_DS4, NOTE_FS4, 0, NOTE_E5,   NOTE_E3, NOTE_B3, NOTE_E4, NOTE_G4, NOTE_E3, 0, NOTE_B3, NOTE_E4, NOTE_G4,  NOTE_G5, 0, NOTE_G5, NOTE_FS5, NOTE_E5, NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_D5,   NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_FS5, NOTE_G5, 0, NOTE_G2, NOTE_B3, NOTE_D4,   NOTE_G4, NOTE_G5, NOTE_B3, NOTE_D4, NOTE_G4, 0, 0, NOTE_FS5, NOTE_B2, NOTE_B3,   NOTE_DS4, NOTE_FS4, 0, NOTE_B3, NOTE_DS4, NOTE_FS4, 0, NOTE_E5, NOTE_E3, NOTE_B3,   NOTE_E4, NOTE_G4, 0, NOTE_B3, NOTE_E4, NOTE_G4, NOTE_G5, NOTE_FS5, 0, NOTE_E5,   NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_D5, NOTE_A3, NOTE_D4, NOTE_FS4, 0, NOTE_E5, 0,   NOTE_C3, NOTE_G3, NOTE_C4, NOTE_E4, NOTE_E5, NOTE_G3, NOTE_C4, NOTE_E4, 0, NOTE_E5,   NOTE_G3, NOTE_C4, NOTE_E4, NOTE_C3, 0, NOTE_G3, NOTE_C4, NOTE_E4, 0, NOTE_C3, 0,   NOTE_G4, 0, NOTE_B3, 0, NOTE_E5, NOTE_G3, NOTE_C4, NOTE_E4, NOTE_E5, 0, NOTE_G3,   NOTE_C4, NOTE_E4, 0, NOTE_D5, NOTE_C5, NOTE_G3, NOTE_B3, NOTE_D4, NOTE_B4, NOTE_G3,   NOTE_B3, NOTE_D4, NOTE_D5, NOTE_C5, NOTE_A2, 0, NOTE_A3, NOTE_A4, NOTE_C4, 0,   NOTE_C5, NOTE_A3, NOTE_C5, NOTE_C4, NOTE_A2, 0, NOTE_B4, NOTE_E2, NOTE_B3,   NOTE_E4, NOTE_G4, 0, NOTE_B3, NOTE_E4, NOTE_G4, NOTE_E2, 0, NOTE_B4, 0, NOTE_G4,   0, NOTE_B3, NOTE_E4, NOTE_G4, 0, NOTE_B3, NOTE_E4, NOTE_G4, 0, NOTE_D3, 0,   NOTE_B2, NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_D3, 0, NOTE_A3, NOTE_D4, NOTE_FS4, 0,   NOTE_B4, 0, NOTE_E5, 0, NOTE_G5, 0, NOTE_B5, 0, NOTE_B5, 0, NOTE_B5, NOTE_E3, 0,   NOTE_E4, 0, NOTE_B3, NOTE_E4, NOTE_G4, NOTE_E3, 0, NOTE_B3, NOTE_E4, NOTE_G4,   NOTE_E3, 0, NOTE_G4, 0, NOTE_B3, NOTE_E4, NOTE_G4, 0, NOTE_B3
  };

// note durations in milliseconds
int noteDurations[] = {
  137, 12, 12, 18, 123, 12, 12, 18, 135,  14, 155, 14, 139, 14, 10, 19, 41, 81, 14, 10, 19, 116, 19, 249, 68, 12, 12, 18, 123,  12, 12, 18, 135, 8, 135, 21, 15, 137, 12, 12, 18, 109, 13, 12, 12, 20, 141, 177, 4,  126, 14, 14, 16, 123, 14, 10, 16, 137, 8, 5, 305, 10, 15, 15, 84, 39, 10, 15, 18,  145, 286, 20, 10, 16, 17, 121, 15, 12, 14, 137, 8, 145, 164, 15, 16, 14, 119, 15,  16, 17, 129, 164, 9, 15, 137, 14, 11, 18, 122, 14, 11, 15, 119, 249, 89, 10, 16,  15, 36, 82, 10, 5, 16, 15, 24, 8, 6, 17, 36, 6, 11, 12, 7, 10, 24, 137, 15, 128,  9, 12, 12, 18, 74, 48, 12, 12, 18, 135, 8, 308, 12, 12, 18, 123, 12, 9, 18, 143,  169, 144, 14, 10, 19, 121, 14, 14, 13, 137, 15, 5, 287, 10, 10, 15, 15, 10, 92,  18, 10, 15, 18, 176, 127, 15, 137, 10, 15, 15, 124, 10, 15, 18, 116, 164, 22, 16,  136, 10, 12, 17, 28, 1, 96, 15, 12, 14, 137, 5, 312, 18, 7, 15, 124, 18, 23, 166,  173, 123, 14, 10, 19, 20, 102, 14, 7, 16, 3, 143, 143, 21, 152, 9, 17, 16, 111, 8,  14, 10, 19, 122, 3, 1, 164, 18, 133, 6, 13, 12, 14, 18, 121, 12, 14, 15, 137, 220,  105, 8, 13, 16, 32, 91, 12, 13, 16, 124, 204, 134, 12, 15, 15, 12, 111, 12, 12, 20,  125, 1, 6, 169, 152, 14, 14, 16, 123, 9, 17, 16, 143, 181, 17, 122, 8, 10, 18, 125,  12, 14, 18, 1, 157, 173, 130, 12, 10, 16, 124, 12, 13, 16, 166, 169, 128, 12, 12, 15,  125, 12, 12, 20, 133, 169, 4, 152, 14, 14, 16, 121, 14, 14, 14, 146, 155, 39, 115, 15,  8, 21, 125, 10, 15, 15, 145, 317, 10, 15, 15, 76, 47, 10, 15, 15, 6, 99, 32, 15, 154,  16, 132, 5, 10, 15, 18, 108, 13, 10, 15, 15, 137, 177, 143, 15, 12, 17, 121, 10, 12,  17, 163, 160, 118, 12, 18, 7, 15, 6, 118, 18, 8, 15, 118, 56, 178, 109, 12, 12, 15,  125, 12, 12, 18, 122, 14, 16, 153, 15, 137, 12, 12, 18, 123, 12, 12, 18, 135, 14,  155, 154, 9, 14, 19, 102, 19, 14, 10, 16, 32, 16, 18, 17, 9, 17, 17, 3, 1, 9, 1, 3,  146, 10, 15, 137, 12, 9, 18, 30, 95, 12, 12, 18, 152, 152, 15, 137, 12, 12, 18, 123,  12
  };

int pinButton = 7; //the pin where we connect the button

 
void setup() {
  pinMode(pinButton, INPUT); //set the button pin as INPUT
 
}
 
void loop() {
  int stateButton = digitalRead(pinButton); //read the state of the button
  if(stateButton == 1) { //if is pressed
    
     for (int thisNote = 0; thisNote < 448; thisNote++) { 
        stateButton = digitalRead(pinButton); 
        if(stateButton == 0) { break;}
        tone(8, melody[thisNote], noteDurations[thisNote]);
        // to distinguish the notes, set a minimum time between them.
        // the note's duration + 10% seems to work well:
        int pauseBetweenNotes = noteDurations[thisNote] * 1.10;
        delay(pauseBetweenNotes);
        // stop the tone playing:
        noTone(8);
    } 
  } 
}
