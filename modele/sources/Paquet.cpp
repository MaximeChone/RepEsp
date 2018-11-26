#include "../includes/Paquet.hpp"

using namespace std;

Paquet::Paquet() {
  cartes.push_front(new Carte("recto", "verso2"));
}

void Paquet::afficherCartes() {
  for (Carte *c : cartes) {
    c->afficher();
  }
}
