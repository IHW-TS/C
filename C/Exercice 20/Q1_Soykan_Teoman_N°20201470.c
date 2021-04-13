#include <stdio.h>
#include <stdlib.h>


typedef struct{
	unsigned int len;
	int* val;
} Tab;

void inverse (Tab s){
    
	int longeur = s.len - 1;
	int inverse; 
	
	for ( int i=0; i<longeur; i++){
		int inverse = s.val[i];
		s.val[i]=s.val[longeur];
		s.val[longeur]=inverse;
		longeur--;
	}
	for ( int i=0; i<s.len; i++){
	    printf("%i\n", s.val[i]);
	}
}

int main ()
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
    printf("\nL'inverse du tableau est : \n");
    inverse(s);
    return 0;
}