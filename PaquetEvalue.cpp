#include "Paquet.hpp"

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

void PaquetEvalue::supprimerCarte(Carte carte) {
  int i = 0, indiceASupprimer = -1;
  for (Carte *c : cartes) {
    if (c->equals(carte)) {
      indiceASupprimer = i;
    }
    i++;
  }

  if (indiceASupprimer != -1) {
    std::list<Carte*>::iterator it = cartes.begin();
    advance(it, indiceASupprimer);
    cartes.erase(it);
  }
}

void PaquetEvalue::afficherCartes() {
  for (Carte *c : cartes) {
    c->afficher();
  }
}

Carte* PaquetEvalue::getCarte(int i) {
    std::list<Carte*>::iterator it = cartes.begin();
    std::advance(it, i);
    return *it;
}
