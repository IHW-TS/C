#include <stdio.h>
#include <stdlib.h>

unsigned int lengthString(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++);
    
    printf("Longeur de la chaine : %d", i);
    return 0;
}

int main () {
    
    char x[100];
    scanf("%s", &x);
    lengthString(x);
    return 0;
    
}
/*
Ici, la boucle while qui va compter le nombre de caratere. != signifie qu'il doit etre different de \0. "chr++" va compter le nombre de caractere.
À la fin de la boucle, on va renvoyer le nombre de charactere.
*/
