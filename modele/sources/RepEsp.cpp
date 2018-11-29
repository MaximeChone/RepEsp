#include "../includes/RepEsp.hpp"

using namespace std;

RepEsp::RepEsp() {
  paquets = new Paquets();
}

void RepEsp::ajouterPaquet(std::string nom) {
  paquets->ajouterPaquet(nom);
}

void RepEsp::ajouterCarte(std::string paquet, std::string recto, std::string verso) {
  paquets->ajouterCarte(paquet, recto, verso);
}

void RepEsp::afficherCartes(std::string nomPaquet) {
  std::cout << std::endl << "(Cartes de " << nomPaquet << ") RepEsp :" << std::endl << std::endl;
  paquets->afficherCartes(nomPaquet);
}

void RepEsp::afficherPaquets() {
  std::cout << std::endl << "(Paquets) RepEsp :" << std::endl << std::endl;
  paquets->afficherPaquets();
}
