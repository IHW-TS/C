#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int len;
    int *val;
} Tab;

int second_minimum(Tab s)
{
    int i, j, temp;
    for (i = 0; i < s.len - 1; i++)
    {
        for (j = 0; j < s.len - i - 1; j++)
        {
            if (s.val[j] > s.val[j + 1])
            {
                temp = s.val[j];
                s.val[j] = s.val[j + 1];
                s.val[j + 1] = temp;
            }
        }
    }
}

int main()
{

    Tab s;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &s.len);

    printf("Entrer des valeurs dans le tableau :\n");

    s.val = (int *)malloc(s.len * sizeof(int));

    for (int i = 0; i < s.len; i++)
    {
        scanf("%d", &s.val[i]);
    }

    second_minimum(s);
    printf("\nLa seconde valeur la plus petite est %d \n", s.val[1]);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int len;
    int *val;
} Tab;

int second_minimum(Tab s)
{
    int i, j, small, s_small;

    // mon premier programme ne fonctionnait pas donc je ai refait un autre.

    // on initialise les valeur a 0
    small = s_small = s.val[0];

    // on realise une boucle for qui va qui fonction de la meme maniere que pour la question 2 sauf que l'on rajoute une
    // condition else if qui lui va prendre le deuxieme plus petit element pour ensuite la sotcker dans le tableau

    for (i = 1; i < s.len; i++)
    {
        if (small > s.val[i])
        {
            s_small = small;
            small = s.val[i];
        }
        else if (s_small > s.val[i] && s.val[i] != small)
        {
            s_small = s.val[i];
        }
    }s
    return s.val[s_small];
}

int main()
{

    Tab s;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &s.len);

    printf("Entrer des valeurs dans le tableau :\n");

    s.val = (int *)malloc(s.len * sizeof(int));

    for (int i = 0; i < s.len; i++)
    {
        scanf("%d", &s.val[i]);
    }

    second_minimum(s);
    printf("\nLa seconde valeur la plus petite est %d \n", s.val[1]);
    return 0;
}

*/