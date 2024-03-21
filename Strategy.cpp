#include "Strategy.h"

void Strategy::tryMovement(){
  movement.forward();
  delay(1000);
  movement.back();
  delay(1000);
  movement.right();
  delay(1000);
  movement.left();
  delay(1000);
  }
void Strategy::tryLed(){
    led.init();
    
    led.onRed();
    delay(500);
    led.onYellow();
    delay(500);
    led.onBlue();
    delay(500);
    led.onGreen();
    delay(500);
  
  }
