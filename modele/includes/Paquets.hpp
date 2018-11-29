#ifndef _PAQUETS_H_
#define _PAQUETS_H_

#include <list>

#include "Paquet.hpp"
#include "Carte.hpp"

class Paquets {

public:
  Paquets(); //constructeur
  void ajouterPaquet(std::string nom);
  void ajouterPaquet(Paquet *p);
  void ajouterCarte(Paquet paquet, std::string recto, std::string verso);
  void ajouterCarte(Paquet paquet, Carte *c);
  void modifierCarte(Paquet paquet, Carte carte, std::string recto, std::string verso);
  void afficherCartes(Paquet paquet);
  void afficherPaquets();

private:
  std::list<Paquet*> paquets;

};

#endif
