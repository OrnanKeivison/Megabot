#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <robo_hardware2.h>

class Movement{
  
  private:
    #define SPEED_FWD  80
    #define SPEED_BCK -60

  public:
    inline void forward(){robo.acionarMotores(SPEED_FWD, SPEED_FWD);}
    inline void   right(){robo.acionarMotores(SPEED_BCK, SPEED_FWD);} 
    inline void    left(){robo.acionarMotores(SPEED_FWD, SPEED_BCK);}  
    inline void    back(){robo.acionarMotores(SPEED_BCK, SPEED_BCK);}
    inline void   stopp(){robo.acionarMotores(0, 0);}
    
    inline void rotateRight(){robo.acionarMotores(80, -80); delay(1700);}
    inline void  rotateLeft(){robo.acionarMotores(-80, 80); delay(1700);}
    
};

#endif
