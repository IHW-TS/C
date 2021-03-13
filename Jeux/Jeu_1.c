#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int nombreMystere = 0, nombreEntre = 0, coups = 0, rejouer = 0, difficulte = 2;
    int max = 100;
    const int MIN = 1;

    srand(time(NULL));
    printf("Choisissez un niveau de difficult� :\n");
    
    printf("1 : entre 1 et 10\n2 : entre 1 et 100\n3 : entre 1 et 1000\n");
    scanf("%d", &difficulte);

    switch(difficulte)
    {
    case 1:
        max = 10;
        break;
    case 2:
        max = 100;
        break;
    case 3:
        max = 1000;
        break;
    default:
        printf("Niveau non reconnu. Je choisis pour vous le niveau 2 (entre 1 et 100).\n");
        max = 100;
    }

    do
    {
        coups = 0;
        nombreMystere = (rand() % (max - MIN + 1)) + MIN;

        do
        {
            printf("Quel est le nombre ? ");
            scanf("%d", &nombreEntre);
            coups++;

            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", coups);

        } while (nombreEntre != nombreMystere);

        printf("Voulez-vous faire une autre partie (1 = oui, 0 = non) ? ");
        scanf("%d", &rejouer);

    } while (rejouer);

}
