#ifndef _PAQUETS_H_
#define _PAQUETS_H_

#include <list>

#include "Paquet.hpp"

class Paquets {

public:
  Paquets(); //constructeur
  void ajouterPaquet(std::string nom);
  void ajouterCarte(std::string paquet, std::string recto, std::string verso);
  void afficherCartes(std::string nomPaquet);
  void afficherPaquets();

private:
  std::list<Paquet*> paquets;

};

#endif
