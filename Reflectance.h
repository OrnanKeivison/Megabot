#ifndef REFLECTANCE_H
#define REFLECTANCE_H

#include <robo_hardware2.h>

class Reflectance{
  
    private:
    
        #define DIVISOR_BRANCO_PRETO_MAIS_ESQ 50
        #define DIVISOR_BRANCO_PRETO_ESQ 50
        #define DIVISOR_BRANCO_PRETO_DIR 40
        #define DIVISOR_BRANCO_PRETO_MAIS_DIR 50

    public:
        
        inline bool pppp() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool pppb() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool ppbb() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool pbbb() {return (SensorLinhaMaisEsq<DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bppp() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bppb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bpbb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq<DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbpp() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbpb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir<DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbbp() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir<DIVISOR_BRANCO_PRETO_MAIS_DIR);}
        inline bool bbbb() {return (SensorLinhaMaisEsq>DIVISOR_BRANCO_PRETO_MAIS_ESQ && SensorLinhaEsq>DIVISOR_BRANCO_PRETO_ESQ && SensorLinhaDir>DIVISOR_BRANCO_PRETO_DIR && SensorLinhaMaisDir>DIVISOR_BRANCO_PRETO_MAIS_DIR);}

        inline bool   forward(){return (bbbb() || bppb());}
        inline bool     right(){return (bppp() || bbpp() || bbpb() || bbbp());}
        inline bool      left(){return (pppb() || ppbb() || pbbb() || bpbb());}

        float SensorLinhaEsq;
        float SensorLinhaDir; 
        float SensorLinhaMaisEsq;
        float SensorLinhaMaisDir;
        
        inline void reading(){SensorLinhaEsq = robo.lerSensorLinhaEsqSemRuido();SensorLinhaDir = robo.lerSensorLinhaDirSemRuido();SensorLinhaMaisEsq = robo.lerSensorLinhaMaisEsqSemRuido();SensorLinhaMaisDir = robo.lerSensorLinhaMaisDirSemRuido();}
};
    
#endif
