#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>

int entier_binaire(int n) {

    int b = 0;
    int reste, i = 1/*, etape = 1*/;

    while (n != 0) {
        reste = n % 2;
        
       // affiche les étapes pour parvenir au nombre binaire
       
       /* printf("Etape 1 %d: %d/2, Reste = %d, Quotient = %d\n", etape++, n, reste, n / 2); */
       
        n /= 2;
        b += reste * i;
        i *= 10;
    }
    
    return b;
}

int main() {
    int n;
    printf("Entre un nombre entier : ");
    scanf("%d", &n);
    printf("%d En nombre entier = %d en binaire", n, entier_binaire(n));
    return 0;
}
