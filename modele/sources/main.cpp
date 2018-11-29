#include "../includes/main.hpp"

const std::string choix = "Faites votre choix :\n1 Créer paquet\n2 Créer carte\n3 Quitter";

int main (int argc, char *argv[]) {
  RepEsp *re = new RepEsp();
  re->ajouterPaquet("Anglais:Francais");
  re->ajouterCarte("Anglais:Francais", "Mere", "Mother");

  re->afficherPaquets();
  re->afficherCartes("Anglais:Francais");

  return EXIT_SUCCESS;
}
