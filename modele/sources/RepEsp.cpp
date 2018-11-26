#include "../includes/RepEsp.hpp"

using namespace std;

RepEsp::RepEsp() {
  paquets = new Paquets("Maxence");
}

void RepEsp::afficherCartes() {
  std::cout << std::endl << "RepEsp :" << std::endl << std::endl;
  paquets->afficherCartes();
}
