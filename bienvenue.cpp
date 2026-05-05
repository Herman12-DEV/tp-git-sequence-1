// Affiche un message de bienvenue

#include "fonction-bienvenue.h"
#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[])
{
    std::string message = "Bienvenue le monde !";
    int nbAffichage = 1;

    if (argc > 1) {
        message = argv[1];
    }
    if (argc > 2) {
        nbAffichage = std::atoi(argv[2]);
    }

    afficherBienvenue(message, nbAffichage);

    return 0;
}