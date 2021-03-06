#ifndef REPESP_H
#define REPESP_H

#include "Paquet.hpp"
#include "Paquets.hpp"
#include "Carte.hpp"

class RepEsp {

public:
  RepEsp(); //constructeur
  void importerPaquet(Paquet paquet); //todo
  void exporterPaquet(Paquet paquet); //todo
  void ajouterPaquet(std::string nom);
  void ajouterPaquet(Paquet *p);
  void ajouterCarte(Paquet paquet, std::string recto, std::string verso);
  void ajouterCarte(Paquet paquet, Carte *c);
  void modifierCarte(Paquet paquet, Carte carte, std::string recto, std::string verso);
  void renommerPaquet(Paquet paquet, std::string nom);
  void supprimerCarte(Paquet paquet, Carte carte);
  void supprimerPaquet(Paquet paquet);
  void afficherCartes(Paquet nomPaquet);
  void afficherPaquets();

  size_t getNbPaquets();
  Paquet* getPaquet(int i);
  Carte* getCarte(int i, int j);
  size_t getNbCartes(int i);

private:
  Paquets *paquets;

};

#endif
