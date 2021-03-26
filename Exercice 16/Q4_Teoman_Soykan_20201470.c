#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int x(char *s1,char *s2)
{
    
    int a,b,j;
    
for (a = 0; s1[a] != '\0'; a++);
  j = a - 1;
  for (b = 0; b <= a; b++)
  {
    s2[b] = s1[j];
    j--;
  }
  
  return 0;

}

int main()
{
 
    char s1[1000],s2[1000];  
 
    printf("Entrer le premier mot : ");
    gets(s1);
    printf("Entrer le deuxième mot : ");
    gets(s2);
    
    int c = x(s1,s2);
   
 	if (c)
		{
            printf("\nIls sont mirroir");
            
		}else{
		    
		    printf("\nIls ne sont pas mirroir");

		}
    
	return 0;
    
}