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
    makeGreen();
  }
}
void Strategy::makeGreen() {
  movement.stopp();
  delay(200);
  colorSensor.reading();
  delay(200);
  colorSensor.reading();
  delay(200);
  colorSensor.reading();
  delay(200);
  colorSensor.reading();
  delay(200);
  colorSensor.reading();

  if (colorSensor.greenLeft() && !(colorSensor.greenRight())) {
    movement.forward();
    delay(700);
    movement.rotateLeft();
  }

  else if (!(colorSensor.greenLeft()) && colorSensor.greenRight()) {
    movement.forward();
    delay(700);
    movement.rotateRight();
  }

  else if (colorSensor.greenLeft() && colorSensor.greenRight()) {
    movement.forward();
    delay(500);
    movement.rotateRight();
    movement.rotateRight();
  }

  else{
    movement.forward();
    delay(500);
  }
}
void Strategy::tryDistance(){
  distance.reading();
  Serial.print("Dir: ");
  Serial.print(distance.distDir);
  Serial.print("; Esq: ");
  Serial.print(distance.distEsq);
  Serial.println(";");
  delay(500);
}
void Strategy::tryColorSensor(int way = 1){
  colorSensor.reading();
  if(way == 1){
    Serial.print("Esq: ");
    Serial.print(colorSensor.sensorCorEsq.h);
    Serial.print("; ");
    Serial.print(colorSensor.sensorCorEsq.s);
    Serial.print("; ");
    Serial.println(colorSensor.sensorCorEsq.v);
    Serial.print("Dir: ");
    Serial.print(colorSensor.sensorCorDir.h);
    Serial.print("; ");
    Serial.print(colorSensor.sensorCorDir.s);
    Serial.print("; ");
    Serial.print(colorSensor.sensorCorDir.v);
    Serial.println(";");
    delay(500);
  }
  else{
    Serial.print("Dir: ");
    if(colorSensor.greenRight()){
      Serial.print("verde");
    }
    else if(colorSensor.whiteRight()){
      Serial.print("branco");
    }
    else if(colorSensor.blackRight()){
      Serial.print("preto");
    }
    else if(colorSensor.grayRight()){
      Serial.print("cinza");
    }

    Serial.print("; Esq: ");
    if(colorSensor.greenLeft()){
      Serial.println("verde");
    }
    else if(colorSensor.whiteLeft()){
      Serial.println("branco");
    }
    else if(colorSensor.blackLeft()){
      Serial.println("preto");
    }
    else if(colorSensor.grayLeft()){
      Serial.println("cinza");
    }
    delay(500);
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
