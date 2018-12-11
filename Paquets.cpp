#include "Paquets.hpp"

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

void Paquets::renommerPaquet(Paquet paquet, std::string nom) {
  for (Paquet *p : paquets) {
    if (p->equals(paquet)) {
      p->setNom(nom);
    }
  }
}

void Paquets::supprimerCarte(Paquet paquet, Carte carte) {
  for (Paquet *p : paquets) {
    if (p->equals(paquet)) {
      p->supprimerCarte(carte);
    }
  }
}

void Paquets::supprimerPaquet(Paquet paquet) {
  int i = 0, indiceASupprimer = -1;
  for (Paquet *p : paquets) {
    if (p->equals(paquet)) {
      indiceASupprimer = i;
    }
    i++;
  }

  if (indiceASupprimer != -1) {
    std::list<Paquet*>::iterator it = paquets.begin();
    advance(it, indiceASupprimer);
    paquets.erase(it);
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

size_t Paquets::getNbPaquets() {
    return this->paquets.size();
}

Paquet* Paquets::getPaquet(int i) {
    std::list<Paquet*>::iterator it = paquets.begin();
    std::advance(it, i);
    return *it;
}

Carte* Paquets::getCarte(int i, int j) {
    return this->getPaquet(i)->getCarte(j);
}

size_t Paquets::getNbCartes(int i) {
    return this->getPaquet(i)->getNbCartes();
}
