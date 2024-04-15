#include "Carlitto.h"
#include <Modular.h>

//---------------------------------------------------------------------------------------
// Funciones para Entradas Analogicas
// It is funcionally correct
Carlitto::Carlitto (byte portMotIzq, byte potenciaMotIzq, byte portMotorDer, byte potenciaMotDer, byte portPot){
  portMotorIzq =   portMotIzq;
  potenciaMotorIzq =   potenciaMotIzq;
  portMotorDer =   portMotDer;
  potenciaMotorDer =   potenciaMotDer;
  portPotenciometro =   portPot;
}
void Carlitto::init(){
}
void Carlitto::move(int orientacion){
}
void Carlitto::stop(){
}


