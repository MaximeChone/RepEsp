#include "../includes/Carte.hpp"

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
