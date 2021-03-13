#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    // initialisation des variables

    float t = 0;
    float p = 0;
    float pourcentage = 0;

    printf("Nombre total d'etudiants inscrits : \n");     // Affiche un message 
    scanf("%f", &t);                                    // Entrer une valeur

    printf("Nombre total d'etudiants presents : \n");
    scanf("%f", &p);

    pourcentage = (p*100)/t,                            // Calcule d'un pourcentage 

    printf("Le pourcentage d'etudiants presents est de %.2f", pourcentage); // Affiche le resultat
}