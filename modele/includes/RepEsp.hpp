#ifndef _REPESP_H_
#define _REPESP_H_

#include "Paquet.hpp"
#include "Paquets.hpp"
#include "Carte.hpp"

class RepEsp {

public:
  RepEsp(); //constructeur
  void consulterPaquet(); //todo
  void importerPaquet(Paquet paquet); //todo
  void exporterPaquet(Paquet paquet); //todo
  void ajouterPaquet(std::string nom);
  void ajouterPaquet(Paquet *p);
  void ajouterCarte(Paquet paquet, std::string recto, std::string verso);
  void ajouterCarte(Paquet paquet, Carte *c);
  void modifierCarte(Paquet paquet, Carte carte, std::string recto, std::string verso); //todo
  void renommerPaquet(Paquet paquet, std::string nom); //todo
  void supprimerCarte(Paquet paquet, Carte carte); //todo
  void supprimerPaquet(Paquet paquet); //todo
  void afficherCartes(Paquet nomPaquet);
  void afficherPaquets();

private:
  Paquets *paquets;

};

#endif
