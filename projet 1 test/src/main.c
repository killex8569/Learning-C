// Base du projet C

// Partie 1 :  Les bases du C

#include <stdio.h> // Inclusion du fichier stdio.h, les points H permettent de centraliser des fonctions

int main(void) // Initialisation de la fonction main, le void entre parenthèse est un paramètre, le int permet de dire que le retour de la fonction main est un int
{
    static int User = 18; // Ici le static permet d'initialiser la variable une seul fois lors de l'utilisation de la fonction
    int UserAge = 45; // Affecte la valeur 45 à la variable UserAge, donc UserAge vaut 45
    UserAge = 20;

    printf("Hello World!\n"); // Printf qui permet de print le texte entre "" et \n qui permet de retourner à la ligne
    return 0; // Retourne 0, permet de terminer la fonction
}

const int USER_AGE = 0; // Ici on peut mettre des "variable Global", mais c'est pas conseiller, sauf pour les constante, pour cela on met "const" juste devant la variable
const float PI = 3.14; // On met généralement les nom en majuscule des variables qui sont constantes




