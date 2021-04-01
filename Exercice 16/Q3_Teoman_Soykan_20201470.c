#include <stdio.h>
#include <stdlib.h>

int palindrome(char *txt) 
{
   
  int d, m, f, longeur = 0;


  while (txt[longeur] != '\0') // on pourrait aussi faire appelle a la fonction getLenString(s)
    longeur++;

  f = longeur - 1;
  m = longeur/2;

  for (d = 0; d < m; d++)
  {
    if (txt[d] != txt[f])
    {
      printf("n'est pas palindrome.\n");
      break;
    }
    f--;
  }
  if (d == m)
    printf("Est palindrome.\n");

  return 0;
}

int main() {
    
  char d[100];
  gets(d); // permet d'ecrire des caracteres
  palindrome(d);

    return 0;
}
