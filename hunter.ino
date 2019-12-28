#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int counter = 2;
  delay(1000);
  for(counter = 2;counter<= 8;counter++)
  // put your main code here, to run repeatedly:
 
  DigiKeyboard.print("Hello Digispark!");
  DigiKeyboard.delay(5000);

}
