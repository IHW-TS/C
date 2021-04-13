#include <stdio.h>
#include <stdlib.h>

typedef struct { 
    unsigned int len; 
    int* val; 
} Tab;

int minimum(Tab s)
 {
 	int min,i;
 	min = s.val[0];
    for(i=1; i<s.len; i++)
    {
         if(min>s.val[i])
         {
		     min=s.val[i];
         }   
    }
    printf("le minimum est : %d",min);
 }
 
int main()
{
    
    Tab s;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &s.len);
 
    printf("Entrer des valeurs dans le tableau :\n");
    
    s.val = (int*) malloc(s.len * sizeof(int));
    
    for(int i=0; i<s.len ; i++)
    {
        scanf("%d",&s.val [i]);
    }

    minimum(s);
 
}