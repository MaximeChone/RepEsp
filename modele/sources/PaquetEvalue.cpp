#include "../includes/Paquet.hpp"

using namespace std;

PaquetEvalue::PaquetEvalue() {

}

void PaquetEvalue::ajouterCarte(std::string recto, std::string verso) {
  cartes.push_front(new Carte(recto, verso));
}

void PaquetEvalue::afficherCartes() {
  for (Carte *c : cartes) {
    c->afficher();
  }
}
