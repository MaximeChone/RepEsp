#include "../includes/Carte.hpp"

using namespace std;

Carte::Carte() : recto(""), verso("") {

}

void Carte::modifierCarte(string recto, string verso) {
  this->recto = recto;
  this->verso = verso;
}
