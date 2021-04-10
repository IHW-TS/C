#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* age;
    char* nom;
    char* prenom;

    printf("Quel est ton prenom ? \n");
    scanf("%ms", &prenom);
    printf("Quel est ton nom ?\n");
    scanf("%ms", &nom);
    printf("Quel age as-tu ?\n");
    scanf("%ms", &age);
    printf("Bonjour %s %s, vous avez %s ans", prenom, nom, age);
    free(prenom);
    free(nom);
    free(age);
    return 0;
}
