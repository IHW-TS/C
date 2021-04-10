#include <stdio.h>

typedef struct { 
    unsigned int len; 
    int* val; 
} Tab;

void reverse(Tab s)
{
    int i;
    printf("Affichage du tableau renverse :\n");
    for (i = s.len - 1; i >= 0; i--)
    {
        printf("%d\n", s.val[i]);
    }
}

int main()
{
    Tab s;
    printf("Entrer la taille du tableau :\n");
    scanf("%d", &s.len);
    
    printf("Entrer des valeurs dans le tableau :\n");
    
    s.val = (int*) malloc(s.len + 1 * sizeof(int));
    
    for (int i = 0; i < s.len; i++)
    {
        scanf("%d", s.val + i);
    }
    
    reverse(s);
    return 0;
}