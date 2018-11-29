#include "../includes/main.hpp"

const std::string choix = "Faites votre choix :\n1 Créer paquet\n2 Créer carte\n3 Quitter";

int main (int argc, char *argv[]) {
  RepEsp *re = new RepEsp();
  Paquet *p1 = new Paquet("Anglais:Francais");
  Carte *c1 = new Carte("Mere", "Mother");
  re->ajouterPaquet(p1);
  re->ajouterCarte(*p1, c1);

  re->afficherPaquets();
  re->afficherCartes(*p1);

  re->modifierCarte(*p1, *c1, "Papa", "Father");

  re->afficherCartes(*p1);

  return EXIT_SUCCESS;
}
