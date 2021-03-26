#include <stdio.h>
#include <stdlib.h>

int palindrome(char *txt) 
{
   
  int a, mn, z, longeur = 0;


  while (txt[longeur] != '\0') // on pourrait aussi faire appelle a la fonction getLenString(s)
    longeur++;

  z = longeur - 1;
  mn = longeur/2;

  for (a = 0; a < mn; a++)
  {
    if (txt[a] != txt[z])
    {
      printf("n'est pas palindrome.\n");
      break;
    }
    z--;
  }
  if (a == mn)
    printf("Est palindrome.\n");

  return 0;
}

int main() {
    
  char a[100];
  gets(a); // permet d'ecrire des caracteres
  palindrome(a);

    return 0;
}
