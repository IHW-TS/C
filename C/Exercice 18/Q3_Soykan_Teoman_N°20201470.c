#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int convert(int n) {

    int binaire = 0, rem, i = 1;
    
    while (n != 0) {

        rem = n % 2;
        n /= 2;
        binaire  += rem * i;
        i *= 10;
    }
    return binaire;
}

int main() {
    int n;
    printf("Entrer un nombre entier : ");
    scanf("%d", &n);
    printf("le nombre binaire est : %d", convert(n));
    return 0;
}
