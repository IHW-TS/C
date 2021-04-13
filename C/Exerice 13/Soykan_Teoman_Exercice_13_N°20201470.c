#include <stdio.h>
#include <stdlib.h>

int carre1(int);
int carre2(int);
int carre3(int);
int carre4(int);
int carre5(int);

int main(int argc, char *argv[])
{

    int x;

    printf("Entrer une taille : \n");
    scanf("%d", &x);

    printf("Carre 1 : \n\n");
    carre1(x);

    printf("Carre 2 : \n\n");
    carre2(x);

    printf("Carre 3 : \n\n");
    carre3(x);

    printf("Carre 4 : \n\n");
    carre4(x);

    printf("Carre 5 : \n\n");
    carre5(x);
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

int carre2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if ((i + j) == (n * j / 2))
            {
                printf(" ");
            }

            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}
int carre3(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if ((i + j) == (n - 1))
            {
                printf(" ");
            }

            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
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

int carre5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}