#ifndef LEDS_H
#define LEDS_H

#include <robo_hardware2.h>

class Leds{
  private:
    #define LED_VERMELHO  27
    #define LED_AMARELO   35
    #define LED_AZUL      45
    #define LED_VERDE     53
    
  public:
    inline void  init() {pinMode(LED_VERMELHO, OUTPUT);pinMode(LED_AMARELO, OUTPUT);pinMode(LED_AZUL, OUTPUT);pinMode(LED_VERDE, OUTPUT);off();}

    inline void    onRed() {digitalWrite(LED_VERMELHO, HIGH);digitalWrite(LED_AMARELO, LOW) ;digitalWrite(LED_AZUL, LOW) ;digitalWrite(LED_VERDE, LOW) ;}
    inline void onYellow() {digitalWrite(LED_VERMELHO, LOW) ;digitalWrite(LED_AMARELO, HIGH);digitalWrite(LED_AZUL, LOW) ;digitalWrite(LED_VERDE, LOW) ;}
    inline void   onBlue() {digitalWrite(LED_VERMELHO, LOW) ;digitalWrite(LED_AMARELO, LOW) ;digitalWrite(LED_AZUL, HIGH);digitalWrite(LED_VERDE, LOW) ;}
    inline void  onGreen() {digitalWrite(LED_VERMELHO, LOW) ;digitalWrite(LED_AMARELO, LOW) ;digitalWrite(LED_AZUL, LOW) ;digitalWrite(LED_VERDE, HIGH);}

    inline void      off() {digitalWrite(LED_VERMELHO, LOW) ;digitalWrite(LED_AMARELO, LOW) ;digitalWrite(LED_AZUL,  LOW);digitalWrite(LED_VERDE, LOW) ;}

  
};

#endif
