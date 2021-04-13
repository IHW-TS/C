#include <stdio.h>
#include <stdlib.h>

unsigned int pgcd(unsigned int, unsigned int); // fonction prototype

int main(int argc, char *argv[])
{
    int a, b;
    printf("Entrer 2 nombres positif : \n");
    scanf("%d %d",&a ,&b);
    printf("PGCD = %d", pgcd(a, b));
    return 0;
}

unsigned int pgcd(unsigned int x, unsigned int y)
{

//Si a est b sont différent alors la boucle aura lieu 

  while(x!=y)
    {
        if(x > y)   // si x > y alors x - y
            x -= y;
        else        // si x < y alors x + y
            y -= x;
    }
    return(x);
}