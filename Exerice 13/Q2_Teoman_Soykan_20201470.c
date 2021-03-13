#include <stdio.h>
#include <stdlib.h>

int carre2(int);

int main(int argc, char *argv[])
{

    int x;

    printf("Entrer une taille : \n");
    scanf("%d", &x);

    printf("Carre 2 : \n\n");
    carre2(x);

    return 0;
}


int carre2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}
