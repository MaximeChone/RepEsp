#ifndef _CARTE_H_
#define _CARTE_H_

#include <iostream>
#include <string>

class Carte {

public:
  Carte(); //constructeur
  Carte(std::string recto, std::string verso);
  void modifierCarte(std::string recto, std::string verso);
  void afficher();

private:
  std::string recto;
  std::string verso;

};

#endif
