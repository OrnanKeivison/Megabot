#ifndef COLORSENSOR_H
#define COLORSENSOR_H

#include <robo_hardware2.h>

class ColorSensor{
  
    private:
      
    public:
      HSV sensorCorDir;
      HSV sensorCorEsq;

      inline void reading(){robo.habilitaTCS34(); sensorCorDir = robo.getHSVDireito(); sensorCorEsq = robo.getHSVEsquerdo(); }

      inline bool greenRight(){return(sensorCorDir.h < 160 && sensorCorDir.s > 0.29 && sensorCorDir.v < 600);}
      inline bool whiteRight(){return(sensorCorDir.h > 150 && sensorCorDir.s > 0.29 && sensorCorDir.v > 1000);}
      inline bool blackRight(){return(sensorCorDir.h < 150 && sensorCorDir.s < 0.40 && sensorCorDir.v < 300);}
      inline bool  grayRight(){return(sensorCorDir.h > 150 && sensorCorDir.s > 0.28 && sensorCorDir.v > 600);}

      inline bool greenLeft(){return(sensorCorEsq.h < 160 && sensorCorEsq.s > 0.29 && sensorCorEsq.v < 800);}
      inline bool whiteLeft(){return(sensorCorEsq.h < 150 && sensorCorEsq.s < 0.29 && sensorCorEsq.v > 1000);}
      inline bool blackLeft(){return(sensorCorEsq.h < 150 && sensorCorEsq.s < 0.40 && sensorCorEsq.v < 300);}
      inline bool  grayLeft(){return(sensorCorEsq.h > 150 && sensorCorEsq.s < 0.28 && sensorCorEsq.v > 600);}
};
    
#endif
