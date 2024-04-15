#ifndef Carlitto_h
#define Carlitto_h

#include "Arduino.h"
#include "Carlitto.h"
#include <Modular.h>

//------------------------------------------------------
// Funciones para Entradas Analogicas
class Carlitto: public Modular{
  public:
    Carlitto (byte portMotIzq, byte potenciaMotIzq, byte portMotDer, byte potenciaMotDer, byte portPot);
    void  init();
    void  move(int orientacion);
    void  stop();
  private:
    byte  portMotorIzq;
    byte  potenciaMotorIzq;
    byte  portMotorDer;
    byte  potenciaMotorDer;
    byte  portPotciometro;
    byte  idCarlitto;
};

#endif