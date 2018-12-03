#include "Carte.hpp"

Carte::Carte() : recto(""), verso("") {

}

Carte::Carte(std::string recto, std::string verso) : recto(recto), verso(verso) {

}

void Carte::modifierCarte(std::string recto, std::string verso) {
  this->recto = recto;
  this->verso = verso;
}

void Carte::afficher() {
  std::cout << "Carte : " << recto << " | " << verso << std::endl;
}

bool Carte::equals(Carte carte) {
  return ((getRecto().compare(carte.getRecto()) == 0) && (getVerso().compare(carte.getVerso()) == 0));
}

std::string Carte::getRecto() {
  return recto;
}

std::string Carte::getVerso() {
  return verso;
}
