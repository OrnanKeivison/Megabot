#ifndef STRATEGY_H
#define STRATEGY_H

#include <robo_hardware2.h>
#include "Leds.h"
#include "Movement.h"
#include "Reflectance.h"
#include "ColorSensor.h"

class Strategy{
  public:
    void tryLed();
    void tryMovement();
    void tryReflectance();
    void tryColorSensor(int way = 1);
    void followLine();

  private:
    Leds led;
    Movement movement;
    Reflectance reflectance;
    ColorSensor colorSensor;
};

#endif
