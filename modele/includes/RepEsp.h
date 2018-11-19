#ifndef _REPESP_H_
#define _REPESP_H_

#include <iostream>
#include <string>
#include <stdlib>

#include "Paquet.h"
#include "Carte.h"

class RepEsp {

public:
  RepEsp(); //constructeur
  void consulterPaquet();
  void importerPaquet(Paquet paquet);
  void exporterPaquet(Paquet paquet);
  void ajouterPaquet(std::string nom);
  void ajouterCarte(Paquet paquet, std::string recto, std::string verso);
  void modifierCarte(Paquet paquet, Carte carte, std::string recto, std::string verso);
  void renommerPaquet(Paquet paquet, std::string nom);
  void supprimerCarte(Paquet paquet, Carte carte);
  void supprimerPaquet(Paquet paquet);

private:
  Paquets paquets;

};

#endif
