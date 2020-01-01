#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int counter = 2;
  delay(1000);
  for(counter = 2;counter<= 8;counter++){
     //语句将被执行10次
     DigiKeyboard.print("8");
     DigiKeyboard.print("9");
     DigiKeyboard.delay(5000);
     DigiKeyboard.sendKeyPress(44);
     DigiKeyboard.delay(1500);
     DigiKeyboard.sendKeyPress(0);
     DigiKeyboard.print("9");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("5");
     DigiKeyboard.delay(5000);
     DigiKeyboard.print("9");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("5");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("3");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("1");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("9");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("5");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("9");
     DigiKeyboard.print("1");
     DigiKeyboard.delay(8000);
     DigiKeyboard.sendKeyPress(44);
     DigiKeyboard.delay(1500);
     DigiKeyboard.sendKeyPress(0);
     DigiKeyboard.delay(500);
     DigiKeyboard.print("5");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("9");
     DigiKeyboard.delay(9000);
     DigiKeyboard.sendKeyPress(44);
     DigiKeyboard.delay(1500);
     DigiKeyboard.sendKeyPress(0);
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("6");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("9");
     DigiKeyboard.delay(7000);
     DigiKeyboard.print("6");
     DigiKeyboard.delay(800);
     DigiKeyboard.print("9");
     DigiKeyboard.delay(3300);
     DigiKeyboard.print("2");
     DigiKeyboard.delay(5000);
     DigiKeyboard.print("4");
     }
  // put your main code here, to run repeatedly:
 
  DigiKeyboard.print("7");
  DigiKeyboard.delay(2000);

}
