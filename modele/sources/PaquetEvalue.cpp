#include "../includes/Paquet.hpp"

using namespace std;

PaquetEvalue::PaquetEvalue() {

}

void PaquetEvalue::ajouterCarte(std::string recto, std::string verso) {
  cartes.push_front(new Carte(recto, verso));
}

void PaquetEvalue::ajouterCarte(Carte *c) {
  cartes.push_front(c);
}

void PaquetEvalue::modifierCarte(Carte carte, std::string recto, std::string verso) {
  for (Carte *c : cartes) {
    if (c->equals(carte)) {
      c->modifierCarte(recto, verso);
    }
  }
}

void PaquetEvalue::afficherCartes() {
  for (Carte *c : cartes) {
    c->afficher();
  }
}
