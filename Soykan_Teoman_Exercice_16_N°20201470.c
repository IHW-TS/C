#include <stdio.h>
#include <stdlib.h>



/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////

unsigned int lengthString(char *s)
{

    char s[] = "Programming is fun";

    for (int i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
/*
Ici, la boucle for est valide jusqu'a ce que i = 0 à jusqu'à ce que "\0" (caractère nul) soit rencontré. Dans chaque itération, la valeur deje est augmenté de 1.
À la fin de la boucle, la longueur de la chaîne sera stockée dans le i variable.
Normalement on utilise string pour trouver la longeur d'une chaine ici nous l'avons fait manuellement comme demandez dans l'ennoncer.
*/

/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////


int mirror(char *strA, char *strB)
{
    char str1[100], str2[100];
    int a, b, j;
    scanf("%s", &str1);
    for(a=0; str1[a] != '\0'; a++ );
    j=a-1;
    for(b=0; b<=a; b++)
    {
        str2[b]=str1[j];
        j--;
    }
    for(b=0; b<a; b++)
        printf("%c", str2[b]);
    return 0;
}

/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////

int palindrome(char *txt) 
{
   
  char txt[100];
  int a, mn, z, longeur = 0;

  gets(txt); // permet d'ecrire des caracteres

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

/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////




