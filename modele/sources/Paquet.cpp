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

void Paquet::afficherCartes() {
  paquetFacile->afficherCartes();
}

std::string Paquet::getNom() {
  return nom;
}
