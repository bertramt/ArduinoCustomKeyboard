/*
  * Custom Keyboard
  * 
  * DESCRIPTION 
  * Custom Arduino Micro keyboard using the internal pullup resistors in the Arduino on pins 2-7
  * 
*/

#include "Keyboard.h"
const int buttons[] = {2,3,4,5,6,7}; // array of all button pins


void setup() {
  pinMode(2, INPUT_PULLUP); //UP
  pinMode(3, INPUT_PULLUP); //DOWN
  pinMode(4, INPUT_PULLUP); //LEFT
  pinMode(5, INPUT_PULLUP); //RIGHT 
  pinMode(6, INPUT_PULLUP); //NEXT TAB
  pinMode(7, INPUT_PULLUP); //PREV TAB

  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
 // put your main code here, to run repeatedly:
 for(int i = 2; i < 8; ++i) {
   if(digitalRead(i) == LOW) {
     // software de-bounce improves accuracy
     delay(10);
     if(digitalRead(i) == LOW) {
      if (i == 2) {
        Keyboard.write(0xDA);//Up Arrow
      } else if (i == 3) {
        Keyboard.write(0xD9);//Down Arrow
      } else if (i == 4) {
        Keyboard.write(0xD8);//Left Arrow
      } else if (i == 5) {
        Keyboard.write(0xD7);//Right Arrow
      } else if (i == 6) {
        Keyboard.press(KEY_LEFT_CTRL);
        Keyboard.press(KEY_TAB); 
        //Keyboard.press('n');
        delay(100);
        Keyboard.releaseAll();
        delay(25);        
      } else if (i == 7) {
        Keyboard.press(KEY_LEFT_CTRL);
        Keyboard.press(KEY_LEFT_SHIFT);
        Keyboard.press(KEY_TAB); 
        //Keyboard.press('n');
        delay(100);
        Keyboard.releaseAll();
        delay(25);
      }
      delay(250);
     }
   }
 }
}
