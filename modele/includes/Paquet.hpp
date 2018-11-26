#ifndef _PAQUET_H_
#define _PAQUET_H_

#include <list>

#include "Carte.hpp"

class Paquet {

public:
  Paquet(); //constructeur

private:
  std::list<Carte> cartes;

};

#endif
