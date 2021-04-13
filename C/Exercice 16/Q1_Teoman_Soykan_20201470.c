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
