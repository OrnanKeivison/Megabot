#ifndef STRATEGY_H
#define STRATEGY_H

#include <robo_hardware2.h>
#include "Leds.h"
#include "Movement.h"

class Strategy{
  public:
    void tryLed();
    void tryMovement();
  private:
    Leds led;
    Movement movement;
};

#endif
