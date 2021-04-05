#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n1, n2;
    int i = 0, reste = 0, add[32];

    printf("Entrer le premier nombre binaire : ");
    scanf("%d", &n1);
    printf("Entrer le second nombre binaire : ");
    scanf("%d", &n2);

    while (n1 != 0 || n2 != 0)
    {
        add[i++] = (n1 % 10 + n2 % 10 + reste) % 2;
        reste = (n1 % 10 + n2 % 10 + reste) / 2;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }

    if (reste != 0)
        add[i++] = reste;
    --i;

    printf("Le resultat de l'addition des deux nombres binaires est : ");

    while (i >= 0)
        printf("%d", add[i++]);

    return 0;
}