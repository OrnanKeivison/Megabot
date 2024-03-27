#include "Arduino.h"
#ifndef STRATEGY_H
#define STRATEGY_H

#include <robo_hardware2.h>
#include "Leds.h"
#include "Movement.h"
#include "Reflectance.h"
#include "ColorSensor.h"
#include "Distance.h"

class Strategy{
  public:
    void tryLed();
    void tryMovement();
    void tryReflectance();
    void tryColorSensor(int way = 1);
    void tryDistance();
    void followLine();
    void makeGreen();
    inline void init(){led.init(); distance.init();robo.configurar(false); Serial.begin(9600);}

  private:
    Leds led;
    Movement movement;
    Reflectance reflectance;
    ColorSensor colorSensor;
    Distance distance;
};

#endif
