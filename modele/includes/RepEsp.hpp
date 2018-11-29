#ifndef _REPESP_H_
#define _REPESP_H_

#include "Paquet.hpp"
#include "Paquets.hpp"
#include "Carte.hpp"

class RepEsp {

public:
  RepEsp(); //constructeur
  void consulterPaquet();
  void importerPaquet(Paquet paquet);
  void exporterPaquet(Paquet paquet);
  void ajouterPaquet(std::string nom);
  void ajouterCarte(std::string paquet, std::string recto, std::string verso);
  void modifierCarte(Paquet paquet, Carte carte, std::string recto, std::string verso);
  void renommerPaquet(Paquet paquet, std::string nom);
  void supprimerCarte(Paquet paquet, Carte carte);
  void supprimerPaquet(Paquet paquet);
  void afficherCartes(std::string nomPaquet);
  void afficherPaquets();

private:
  Paquets *paquets;

};

#endif
