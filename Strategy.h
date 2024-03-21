#ifndef STRATEGY_H
#define STRATEGY_H

#include <robo_hardware2.h>
#include "Leds.h"
#include "Movement.h"
#include "Reflectance.h"

class Strategy{
  public:
    void tryLed();
    void tryMovement();
    void tryReflectance();
  private:
    Leds led;
    Movement movement;
    Reflectance reflectance;
};

#endif
