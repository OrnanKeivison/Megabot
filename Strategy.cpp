#include "Strategy.h"

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
