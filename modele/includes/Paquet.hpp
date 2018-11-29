#ifndef _PAQUET_H_
#define _PAQUET_H_

#include <stdio.h>

#include "PaquetEvalue.hpp"
#include "PaquetFacile.hpp"
#include "PaquetMoyen.hpp"
#include "PaquetDifficile.hpp"

class Paquet {

public:
  Paquet(); //constructeur
  Paquet(std::string nom);
  void ajouterCarte(std::string recto, std::string verso);
  void ajouterCarte(Carte *c);
  void modifierCarte(Carte carte, std::string recto, std::string verso);
  void afficherCartes();
  std::string getNom();
  bool equals(Paquet p);

protected:
  std::string nom;
  PaquetEvalue *paquetFacile;
  PaquetEvalue *paquetMoyen;
  PaquetEvalue *paquetDifficile;

};

#endif
