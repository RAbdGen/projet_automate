#include <stdio.h>
#include <string.h>

#define MAX_LEN 20
#define MAX_LIGNES 100 // Capacité maximale de transitions

// Définition d'une structure pour représenter une ligne du fichier
typedef struct {
    char etat_depart[MAX_LEN];  // Ex: 1100
    char entree[MAX_LEN];       // Ex: 1000
    int est_terminal;           // 0 ou 1 (Le booléen)
} Transition;

int main() {
    FILE *fichier;
    Transition automate[MAX_LIGNES]; // Un tableau pour stocker tout l'automate
    int compteur = 0;

    fichier = fopen("donnees.txt", "r");

    if (fichier == NULL) {
        perror("Erreur d'ouverture du fichier");
        return 1;
    }

    printf("--- Chargement de l'automate ---\n");

    // Lecture : On lit 2 chaines (%s) et un entier (%d) pour le booléen
    while (fscanf(fichier, "%s %s %d", 
                  automate[compteur].etat_depart, 
                  automate[compteur].entree, 
                  &automate[compteur].est_terminal) != EOF) {
        
        // Sécurité pour ne pas dépasser la taille du tableau
        compteur++;
        if (compteur >= MAX_LIGNES) break;
    }

    fclose(fichier);

    // --- Utilisation des données lues ---
    printf("Nombre de transitions chargées : %d\n\n", compteur);

    for (int i = 0; i < compteur; i++) {
        printf("Transition %d : Etat '%s' avec Entree '%s' -> ", 
               i+1, automate[i].etat_depart, automate[i].entree);
        
        // Vérification du booléen
        if (automate[i].est_terminal == 1) {
            printf("[ETAT TERMINAL/ACCEPTEUR] \n");
        } else {
            printf("(Non terminal)\n");
        }
    }

    return 0;
}