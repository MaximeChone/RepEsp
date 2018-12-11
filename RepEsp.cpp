#include "RepEsp.hpp"

using namespace std;

RepEsp::RepEsp() {
  paquets = new Paquets();
}

void RepEsp::ajouterPaquet(std::string nom) {
  paquets->ajouterPaquet(nom);
}

void RepEsp::ajouterPaquet(Paquet *p) {
  paquets->ajouterPaquet(p);
}

void RepEsp::ajouterCarte(Paquet paquet, std::string recto, std::string verso) {
  paquets->ajouterCarte(paquet, recto, verso);
}

void RepEsp::ajouterCarte(Paquet paquet, Carte *c) {
  paquets->ajouterCarte(paquet, c);
}

void RepEsp::modifierCarte(Paquet paquet, Carte carte, std::string recto, std::string verso) {
  paquets->modifierCarte(paquet, carte, recto, verso);
}

void RepEsp::renommerPaquet(Paquet paquet, std::string nom) {
  paquets->renommerPaquet(paquet, nom);
}

void RepEsp::supprimerCarte(Paquet paquet, Carte carte) {
  paquets->supprimerCarte(paquet, carte);
}

void RepEsp::supprimerPaquet(Paquet paquet) {
  paquets->supprimerPaquet(paquet);
}

void RepEsp::afficherCartes(Paquet paquet) {
  std::cout << std::endl << "(Cartes de " << paquet.getNom() << ") RepEsp :" << std::endl << std::endl;
  paquets->afficherCartes(paquet);
}

void RepEsp::afficherPaquets() {
  std::cout << std::endl << "(Paquets) RepEsp :" << std::endl << std::endl;
  paquets->afficherPaquets();
}

size_t RepEsp::getNbPaquets() {
    return this->paquets->getNbPaquets();
}

Paquet* RepEsp::getPaquet(int i) {
    return this->paquets->getPaquet(i);
}

Carte* RepEsp::getCarte(int i, int j) {
    return this->paquets->getCarte(i, j);
}

size_t RepEsp::getNbCartes(int i) {
    return this->paquets->getNbCartes(i);
}
