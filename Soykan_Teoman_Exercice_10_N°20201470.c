
#include <stdio.h>
#include <stdlib.h>

unsigned int fibo(unsigned int);

// fonction prototype 

int main(int argc, char *argv[])
{
  unsigned int x = 0;
  printf("Entrer un nombre : ");
  scanf("%u", &x);
  printf("%u", fibo(x));
  return 0;
}

unsigned int fibo(unsigned int x)
{
  // Initialisation des variables 
  int a = 0, b = 1, c;
  // si x = 0 alors on renvoie la valeur 0
  if( x == 0)
  {
    return a;
  }
    // Réalisaiton d'un boucle qui va continuer de s'executer tant que i <= x
  for (int i = 2; i <= x; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}