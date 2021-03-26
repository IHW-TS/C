#include <stdio.h>
#include <stdlib.h>

void mirror(char *str1; char* str2)
{
    
  int a, b, j;
  for (a = 0; str1[a] != '\0'; a++);
  j = a - 1;
  
  str2 = (char *) malloc((j+1)*sizeof(char));
  
  for (b = 0; b <= a; b++)
  {
    str2[b] = str1[j];
    j--;
  }
  
  for (b = 0; b < a; b++)
    printf("%c", str2[b]);
  return 0;
}

int main()
{
    char* s;
    printf("Ecriver un mot : ");
    gets(s); 
    printf("Le miroir du mot est : ");
    s = mirror(str1, str2);
    return 0;
}
