#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int len;
    int *val;
} Tab;

void duplicate(Tab s)
{
    int i, j, b[10000], count;
    for (i = 0; i < s.len; i++)
    {
        count = 0;

            for (j = 0; j < s.len; j++)
            {
                if (s.val[i] == s.val[j])
                {
                    count++;
                }
            }
            
        b[i] = count;
    }
    
    for (i = 0; i < s.len; i++)
    {
            printf("Le nombre de %d est %d \n", s.val[i], b[i]);
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

    duplicate(s);

    return 0;
}
