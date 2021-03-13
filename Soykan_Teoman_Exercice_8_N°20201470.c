
#include <stdio.h>
#include <stdlib.h>

unsigned int fibo (unsigned int) ; // Fonction prototype
 
int main(int argc, char *argv[])
{
    // Création de Variable

    unsigned int x;
    int resultat;
 
    printf("Entrer un nombre : ");
    scanf("%u", &x);

    // Condition pour les nombres négatifs

    if (x < 0)
    {
        printf("Un nombre negatif n'est pas possible.\n");
    }
    else
    {
        resultat = fibo(x);
        printf("Le nombre %u dans fibonacci est classe : %d\n", x, resultat);
    }
    return 0;
}

// Fonciton définie

unsigned int fibo (unsigned int x)
{
    // Convertion de la suite en code 

    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(x - 1) + fibo(x - 2));
    }
}