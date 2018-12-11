#ifndef PAQUETEVALUE_H
#define PAQUETEVALUE_H

#include <list>

#include "Carte.hpp"

class PaquetEvalue {

public:
  PaquetEvalue();
  void ajouterCarte(std::string recto, std::string verso);
  void ajouterCarte(Carte *c);
  void modifierCarte(Carte carte, std::string recto, std::string verso);
  void supprimerCarte(Carte carte);
  void afficherCartes();

  Carte* getCarte(int i);
  std::list<Carte*> getCartes();

protected:
  std::list<Carte*> cartes;

};

#endif
