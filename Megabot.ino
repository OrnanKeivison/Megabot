#include <robo_hardware2.h>
#include "Strategy.h"
Strategy strategy;

void setup() {
  robo.configurar(false);
  Serial.begin(9600);
}

void loop() {
   strategy.followLine();
  //  strategy.tryColorSensor(2);
}
