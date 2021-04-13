#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c;

    printf("=== Menu ===\n");
    printf("1. Royal Chese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    printf("Votre choix ?");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("vous avez choisis le menu 1");
        break;
    case 2:
        printf("vous avez choisis le menu 2");
        break;
    case 3:
        printf("vous avez choisis le menu 3");
        break;
    case 4:
        printf("vous avez choisis le menu 4");
        break;
    }
}