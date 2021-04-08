#include <math.h>
#include <stdio.h>


long long convert(int n) {

    long long b = 0;
    int reste, i = 1, etape = 1;

    while (n != 0) {
        reste = n % 2;
        printf("Etape 1 %d: %d/2, Reste = %d, Quotient = %d\n", etape++, n, reste, n / 2);
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
    printf("%d En nombre entier  = %lld en binaire", n, convert(n));
    return 0;
}
