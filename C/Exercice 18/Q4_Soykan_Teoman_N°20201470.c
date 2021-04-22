#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int binaire_entier(unsigned int number)
{

    unsigned int decimal = 0, i = 0;
    unsigned reste;

    while (number != 0)
    {
        reste = number % 10;
        number /= 10;
        decimal += reste * pow(2, i);
        i++;
    }
    return decimal;
}

int main()
{

    unsigned int n;
    printf("Entrer un nombre binaire : ");
    scanf("%d", &n);
    printf("%d en decimal", binaire_entier(n));
    return 0;
}