#include <stdio.h>
#include <stdlib.h>

int carres(int);


int main(int argc, char *argv[])
{

    int x;

    printf("Entrer une taille : \n");
    scanf("%d", &x);

    printf("Carres : \n\n");
    carres(x);

    return 0;
}

int carres(int n)
{
    int i = 1;

    for (i ; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf(" ");

        printf("               ");

        for (int j = 0; j < n; j++)
        {
            if (i == j + 1) 
                printf("  ");
            else
                printf("* ");
        }

        printf("               ");

        for (int j = 0; j < n; j++)
        {
            if ((i + j) == (n - 0))
                printf("  ");
            else
                printf("* ");
        }

        printf("               ");

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("               ");

        for (int j = i; j < n; j++)
        {
            printf("    ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}