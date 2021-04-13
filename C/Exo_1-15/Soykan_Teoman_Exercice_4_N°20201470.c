#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    
    printf("Entrez un entier :\n");
    scanf("%d", &n);

    unsigned int i;
    i = n;

    printf("%u\n", i);
    return 0;

}

    /*
    L'affectation me parait légale car la compilation marche sans aucun problème,
    même arpes l'ajoute d'un chiffre négatif. Aucun message d'erreur jusqu'à présent.
    */