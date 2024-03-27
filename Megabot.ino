#include <robo_hardware2.h>
#include "Strategy.h"
Strategy strategy;

void setup() {
  strategy.init();
}

void loop() {
   strategy.tryDistance();
  //  strategy.tryColorSensor(2);
}
