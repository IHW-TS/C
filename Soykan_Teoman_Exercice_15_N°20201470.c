#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void sieve(const int n, char *np)
{
    int x = 0;

    //Definir np

    memset(np, 1, (n + 1));

    np[0] = 0;
    np[1] = 0;

    int l = sqrt(n);
    for (x = 2; x <= l; x++)
    {
        // si np[x] n'est pas changer, alors c'est un nombre premier

        if (np[x] == 1)
        {
            int i;

            // Mettre a jour les multiples de p

            for (i = x * 2; i <= n; i += x)
            {
                np[i] = 0;
            }
        }
    }
}

int main()
{
    int n = 0;
    int i = 0;
    int j, count = 0;
    char *pn = NULL;

    printf("\nEntrer un nombre : ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%i ne peut avoir d'entier inferieur ou egal a 2\n", n);
        return 0;
    }
    else
    {

        // alloue la memoire pour la liste

        pn = malloc(sizeof(char) * (n + 1));

        // Récupere les nombres premiers

        sieve(n, pn);
        printf("\nLes nombres premiers inferieurs ou egaux a %d sont : \n\n", n);

        // affiche tout les nombres premiers

        for (i = 2; i <= n; i++)
        {
            if (pn[i])
            {
                printf("%d\n", i);
                count++;
            }
        }
        free(pn); // libère la mémoire allouée

        printf("\nTotale de nombre premier inferieur au egaux a %d = %d", n, count);
    }
    return 0;
}

/*
////////////////////////////////////////////////////////////////////
V2
///////////////////////////////////////////////////////////////////


#include<stdio.h>   

int sieve(int n){
    
    int prime[n+1];
    int count = 0;
	//Loading the array with numbers from 1 to n
	for(int i = 1; i <= n; i++)
	{
		prime[i] = i;
	}
	//Start with least prime number, which is 2.
	//No need to check for numbers greater than square root of n.
	//They will be already marked.
	for(int i = 2; i*i <= n; i++)
	{
		if(prime[i] != -1)
		{
			//Mark all the multiples of i as -1.
			for(int j = 2*i; j <=n ; j += i)
				prime[j] = -1;
		}
	}
	printf("Prime numbers are: \n");
	for(int i=2; i <= n; i++)
	{
		if(prime[i] != -1)
		{
			printf("%d ", i);
			count++;
		}
	}
	
    printf("\nTotale de nombre premier inferieur ou egaux est de : %d",count); 

	
}

int main()
{
	int n;
	printf("Enter n value: ");
	scanf("%d", &n);
    sieve(n);
}*/