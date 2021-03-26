#include <stdio.h>
#include <stdlib.h>

int mirror(char *str1)
{
    char str2 [100];
  int a, b, j;
  for (a = 0; str1[a] != '\0'; a++);
  j = a - 1;
  
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
    char s [100];
    printf("Ecriver un mot : ");
    gets(s); 
    printf("Le miroir du mot est : ");
    mirror(s);
    return 0;
}
