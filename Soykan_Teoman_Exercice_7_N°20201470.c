#include <stdio.h>
#include <stdlib.h>

// Conception de la fonction

int min(int, int);

int main(int argc, char *argv[])
{
    int x, y;


    printf("Entrer le premier nombre : \n");
    scanf("%d", &x);

    printf("Entrer le deuxieme nombre : \n");
    scanf("%d", &y);

    printf("Le plus petit nombre entre %d et %d est : %d\n", x, y, min (x,y));
   
}

int min(int a, int b)
{
    int min = (a < b) ? a : b;
    return (min);
}


