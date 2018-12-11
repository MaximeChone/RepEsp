#include "Paquet.hpp"

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

void Paquet::supprimerCarte(Carte carte) {
  paquetFacile->supprimerCarte(carte);
}

void Paquet::afficherCartes() {
  paquetFacile->afficherCartes();
}

void Paquet::setNom(std::string nom) {
  this->nom = nom;
}

std::string Paquet::getNom() {
  return nom;
}

bool Paquet::equals(Paquet p) {
  return (getNom().compare(p.getNom()) == 0);
}

Carte* Paquet::getCarte(int i) {
    return this->paquetFacile->getCarte(i);
}
