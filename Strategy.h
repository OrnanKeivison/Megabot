#ifndef STRATEGY_H
#define STRATEGY_H

#include <robo_hardware2.h>
#include "Leds.h"

class Strategy{
  public:
    void tryLed();
  private:
    Leds led;
};

#endif
