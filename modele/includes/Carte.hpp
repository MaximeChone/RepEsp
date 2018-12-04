#ifndef _CARTE_H_
#define _CARTE_H_

#include <cstdlib>
#include <string>

class Carte {

public:
  Carte(); //constructeur
  void modifierCarte(std::string recto, std::string verso);

private:
  std::string recto;
  std::string verso;

};

#endif
