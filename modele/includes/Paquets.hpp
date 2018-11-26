#ifndef _PAQUETS_H_
#define _PAQUETS_H_

#include <iostream>

#include "PaquetFacile.hpp"
#include "PaquetMoyen.hpp"
#include "PaquetDifficile.hpp"

class Paquets {

public:
  Paquets(); //constructeur
  Paquets(std::string nom);
  void afficherCartes();

private:
  std::string nom;
  PaquetFacile *paquetFacile;
  PaquetMoyen *paquetMoyen;
  PaquetDifficile *paquetDifficile;

};

#endif
