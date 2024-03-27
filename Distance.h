#ifndef DISTANCE_H
#define DISTANCE_H

#include <robo_hardware2.h>
#include <Wire.h>
#include <VL53L0X.h>

class Distance{
  
    private:
      #define XSHUT_Sensor2 24
      #define XSHUT_Sensor1 26
      
      #define Sensor1_endereco 42
      #define Sensor2_endereco 43
      
    public:
      VL53L0X Sensor1;
      VL53L0X Sensor2;

      int distDir;
      int distEsq;

      void init(){//Desliga todos os VL53L0X.
        pinMode(XSHUT_Sensor1, OUTPUT);
        pinMode(XSHUT_Sensor2, OUTPUT);
      
        //Inicia a comunicação serial.
        Serial.begin(9600);
        Wire.begin();
      
        //Liga os sensores e altera seus endereços.
        pinMode(XSHUT_Sensor2, INPUT);
        delay(10);
        Sensor2.setAddress(Sensor2_endereco);
        pinMode(XSHUT_Sensor1, INPUT);
        delay(10);
        Sensor1.setAddress(Sensor1_endereco);
      
        //Inicializa os sensores.
        Sensor1.init();
        Sensor2.init();
      
        //Define timeout para os sensores.
        Sensor1.setTimeout(500);
        Sensor2.setTimeout(500);
        
        //Inicia o modo de leitura contínuo dos VL53L0X.
        Sensor1.startContinuous();
        Sensor2.startContinuous();
        }

      inline void reading(){distDir = Sensor1.readRangeContinuousMillimeters()*0.1; distEsq = Sensor2.readRangeContinuousMillimeters()*0.1;}
};
    
#endif
