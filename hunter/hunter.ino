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
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("8");
     DigiKeyboard.print("9");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("8");
     DigiKeyboard.print("9");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("8");
     DigiKeyboard.print("9");
     DigiKeyboard.delay(1000);
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("3");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("1");
     DigiKeyboard.delay(1000);
     DigiKeyboard.print("5");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("9");
     DigiKeyboard.print("1");
     DigiKeyboard.delay(5500);
     DigiKeyboard.print("6");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("9");
     DigiKeyboard.delay(500);
     DigiKeyboard.print("6");
     DigiKeyboard.delay(3300);
     DigiKeyboard.print("9");
     
  }
  // put your main code here, to run repeatedly:
 
  DigiKeyboard.print("Hello Digispark!");
  DigiKeyboard.delay(5000);

}
