#ifndef _PAQUET_H_
#define _PAQUET_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <list>

#include "Carte.h"

class Paquet {

public:
  Paquet(); //constructeur

private:
  std::list<Carte> cartes;

};

#endif
