#include "../includes/Paquet.hpp"

Paquet::Paquet() {
  paquetFacile = new PaquetFacile();
  paquetMoyen = new PaquetMoyen();
  paquetDifficile = new PaquetDifficile();
}

Paquet::Paquet(std::string nom) {
  new (this) Paquet();
  this->nom = nom;
}

void Paquet::ajouterCarte(std::string recto, std::string verso) {
  paquetFacile->ajouterCarte(recto, verso);
}

void Paquet::ajouterCarte(Carte *c) {
  paquetFacile->ajouterCarte(c);
}

void Paquet::modifierCarte(Carte carte, std::string recto, std::string verso) {
  paquetFacile->modifierCarte(carte, recto, verso);
}

void Paquet::afficherCartes() {
  paquetFacile->afficherCartes();
}

std::string Paquet::getNom() {
  return nom;
}

bool Paquet::equals(Paquet p) {
  return (getNom().compare(p.getNom()) == 0);
}
