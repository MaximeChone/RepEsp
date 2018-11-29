#include "../includes/Paquets.hpp"

Paquets::Paquets() {

}

void Paquets::ajouterPaquet(std::string nom) {
  paquets.push_front(new Paquet(nom));
}

void Paquets::ajouterPaquet(Paquet *p) {
  paquets.push_front(p);
}

void Paquets::ajouterCarte(Paquet paquet, std::string recto, std::string verso) {
  for (Paquet *p : paquets) {
    if (p->equals(paquet)) {
      p->ajouterCarte(recto, verso);
    }
  }
}

void Paquets::ajouterCarte(Paquet paquet, Carte *c) {
  for (Paquet *p : paquets) {
    if (p->equals(paquet)) {
      p->ajouterCarte(c);
    }
  }
}

void Paquets::modifierCarte(Paquet paquet, Carte carte, std::string recto, std::string verso) {
  for (Paquet *p : paquets) {
    if (p->equals(paquet)) {
      p->modifierCarte(carte, recto, verso);
    }
  }
}

void Paquets::afficherCartes(Paquet paquet) {
  for (Paquet *p : paquets) {
    if (p->equals(paquet)) {
      p->afficherCartes();
    }
  }
}

void Paquets::afficherPaquets() {
  for (Paquet *p : paquets) {
    std::cout << "Paquet : " << p->getNom() << std::endl;
  }
}
