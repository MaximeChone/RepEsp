#ifndef PAQUET_H
#define PAQUET_H

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
  void supprimerCarte(Carte carte);
  void afficherCartes();
  void setNom(std::string nom);
  std::string getNom();
  bool equals(Paquet p);

  Carte* getCarte(int i);

protected:
  std::string nom;
  PaquetEvalue *paquetFacile;
  PaquetEvalue *paquetMoyen;
  PaquetEvalue *paquetDifficile;

};

#endif
