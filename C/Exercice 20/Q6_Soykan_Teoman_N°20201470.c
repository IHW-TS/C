#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int len;
    int *val;
} Tab;

Tab remove_duplicate(Tab s)
{
    int i, j, k, count;

    for (i = 0; i < s.len; i++)
    {
        for (j = i + 1; j < s.len; j++)
        {
            // quand un élément dupliqué est trouver
            if (s.val[i] == s.val[j])
            {
                //On va suprrimer l'élément dupliqué

                for (k = j; k < s.len; k++)
                {
                    s.val[k] = s.val[k + 1];
                }

                //décrementer la longeur une fois l'élément dupliquer supprimer

                s.len--;

                // Si un decalage se produit ne pas incrementer j
                j--;
            }
        }
    }

    for (i = 0; i < s.len; i++)
    {
        printf("Le nombre est %d \n", s.val[i]);
    }
    return s;
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

    remove_duplicate(s);

    return 0;
}
