#ifndef _PAQUETEVALUE_H_
#define _PAQUETEVALUE_H_

#include <list>

#include "Carte.hpp"

class PaquetEvalue {

public:
  PaquetEvalue();
  void ajouterCarte(std::string recto, std::string verso);
  void ajouterCarte(Carte *c);
  void modifierCarte(Carte carte, std::string recto, std::string verso);
  void afficherCartes();

protected:
  std::list<Carte*> cartes;

};

#endif
