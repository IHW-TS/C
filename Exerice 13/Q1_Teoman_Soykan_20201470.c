#include <stdio.h>
#include <stdlib.h>

int carre1(int);

int main(int argc, char *argv[])
{

    int x;

    printf("Entrer une taille : \n");
    scanf("%d", &x);

    printf("Carre 1 : \n\n");
    carre1(x);

    return 0;
}

int carre1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("* ");
        }
        printf("*\n");
    }
}