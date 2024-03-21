#include "Strategy.h"

void Strategy::followLine() {

  reflectance.reading();

  if (reflectance.forward()) {
    movement.forward();
  }

  else if (reflectance.right()) {
    movement.right();
  }

  else if (reflectance.left()) {
    movement.left();
  }

  else if (reflectance.pppp()) {
    movement.stopp();
    delay(1000);
  }
}
void Strategy::tryReflectance(){
  reflectance.reading();
  Serial.print("Esq: ");
  Serial.print(reflectance.SensorLinhaEsq);
  Serial.print("; +Esq: ");
  Serial.print(reflectance.SensorLinhaMaisEsq);
  Serial.print("Dir: ");
  Serial.print(reflectance.SensorLinhaDir);
  Serial.print("; +Dir: ");
  Serial.print(reflectance.SensorLinhaMaisDir);
  Serial.println(";");
  delay(500);
  }
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
