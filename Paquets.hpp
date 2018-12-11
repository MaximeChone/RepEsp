#ifndef PAQUETS_H
#define PAQUETS_H

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
  void renommerPaquet(Paquet paquet, std::string nom);
  void supprimerCarte(Paquet paquet, Carte carte);
  void supprimerPaquet(Paquet paquet);
  void afficherCartes(Paquet paquet);
  void afficherPaquets();

  size_t getNbPaquets();
  Paquet* getPaquet(int i);
  Carte* getCarte(int i, int j);
  size_t getNbCartes(int i);

private:
  std::list<Paquet*> paquets;

};

#endif
