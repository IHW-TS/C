#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int a = 0;
    int b = 0;
    int resultat = 0;

    printf("Entrer une premiere valeur : ");
    scanf("%d", &a);
    printf("Entrer une deuxieme valeur : ");
    scanf("%d", &b);

    resultat = a + b;
    printf("le resultat de l'addition de %d par %d est : %d \n", a, b, resultat);

    resultat = a - b;
    printf("le resultat de la soustraction de %d par %d est : %d \n", a, b, resultat);

    resultat = a * b;
    printf("le resultat de la multiplication de %d par %d est : %d \n", a, b, resultat);

    resultat = a / b;
    printf("le resultat de la division de %d par %d est : %d \n", a, b, resultat);

    /*  
    Je me retrouve avec un message d'erreur sur VS code... Je pense que l'erreur se trouve au niveau du coprocesseur de calcul.
    En fonctionnant en langage mathématiques, si la valeur du deuxième opérant est zéro, le comportement n'est pas défini (indéterminée), elle est donc impossible à poser.
    Je pense que cette comparaison pourrait etre la réponse au problème. Ensuite on pourrait aussi se demander si un ordinateur pourrait tenter de calculer une division par 0,
    voir afficher une erreur de calcule a cet endroit, ou alors le message d'erreur peut varier en fonction du langage...
    */
}