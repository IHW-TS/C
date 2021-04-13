#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int len;
    int *val;
} Tab;

int return_duplicate(Tab s)
{
   int i, j;
   for (i = 0; i < s.len; i++)
	{
		for(j = i + 1; j < s.len; j++)
		{
    		if(s.val[i] == s.val[j])
    		{
    			 return 0;
			}
		}
	}
    return 1;
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

printf("Le résultat est : %d", return_duplicate(s));    

return 0;
}

