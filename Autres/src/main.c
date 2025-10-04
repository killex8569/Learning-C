#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[50];
    int complexite;
    double duree;
} Tache;

int main() {
    // Exemple de données
    Tache taches[] = {
        {"Analyse", 2, 3.5},
        {"Developpement", 5, 12.0},
        {"Test", 3, 4.25}
    };
    int n = sizeof(taches)/sizeof(taches[0]);

    FILE *fp = fopen("taches.csv", "w");
    if (!fp) {
        perror("open");
        return 1;
    }

    // En-tête
    fprintf(fp, "nom,complexite,duree\n");

    // Données
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s,%d,%.2f\n", taches[i].nom, taches[i].complexite, taches[i].duree);
    }

    fclose(fp);
    return 0;
}
