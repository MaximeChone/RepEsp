#ifndef _PAQUETS_H_
#define _PAQUETS_H_

#include "PaquetFacile.hpp"
#include "PaquetMoyen.hpp"
#include "PaquetDifficile.hpp"

class Paquets {

public:
  Paquets(); //constructeur

private:
  PaquetFacile *paquetFacile;
  PaquetMoyen *paquetMoyen;
  PaquetDifficile *paquetDifficile;

};

#endif
