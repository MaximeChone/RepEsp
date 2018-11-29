#include "../includes/Paquets.hpp"

Paquets::Paquets() {

}

void Paquets::ajouterPaquet(std::string nom) {
  paquets.push_front(new Paquet(nom));
}

void Paquets::ajouterCarte(std::string paquet, std::string recto, std::string verso) {
  for (Paquet *p : paquets) {
    if (p->getNom().compare(paquet) == 0) {
      p->ajouterCarte(recto, verso);
    }
  }
}

void Paquets::afficherCartes(std::string nomPaquet) {
  for (Paquet *p : paquets) {
    if (p->getNom().compare(nomPaquet) == 0) {
      p->afficherCartes();
    }
  }
}

void Paquets::afficherPaquets() {
  for (Paquet *p : paquets) {
    std::cout << "Paquet : " << p->getNom() << std::endl;
  }
}
