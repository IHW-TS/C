#include <stdio.h>
#include <stdlib.h>

int carre3(int);

int main(int argc, char *argv[])
{

    int x;

    printf("Entrer une taille : \n");
    scanf("%d", &x);

    printf("Carre 3 : \n\n");
    carre3(x);

    return 0;
}

int carre3(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if ((i + j) == (n - 1))
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}
