#include "../includes/Paquets.hpp"

Paquets::Paquets() {
  paquetFacile = new PaquetFacile();
  paquetMoyen = new PaquetMoyen();
  paquetDifficile = new PaquetDifficile();
}

Paquets::Paquets(std::string nom) {
  new (this) Paquets();
  this->nom = nom;
}

void Paquets::afficherCartes() {
  std::cout << nom << " :" << std::endl;

  std::cout << "Paquet facile :" << std::endl;
  paquetFacile->afficherCartes();
  std::cout << std::endl << std::endl;

  std::cout << "Paquet moyen :" << std::endl;
  paquetMoyen->afficherCartes();
  std::cout << std::endl << std::endl;

  std::cout << "Paquet difficile :" << std::endl;
  paquetDifficile->afficherCartes();
  std::cout << std::endl << std::endl;
}
