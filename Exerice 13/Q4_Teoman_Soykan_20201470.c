#include <stdio.h>
#include <stdlib.h>

int carre4(int);

int main(int argc, char *argv[])
{

    int x;

    printf("Entrer une taille : \n");
    scanf("%d", &x);

    printf("Carre 4 : \n\n");
    carre4(x);

    return 0;
}


int carre4(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

