#include "Carte.h"

using namespace std;

Carte::Carte() : recto(""), verso("") {

}

void Carte::modifierCarte(string recto, string verso) {
  this->recto = recto;
  this->verso = verso;
}
