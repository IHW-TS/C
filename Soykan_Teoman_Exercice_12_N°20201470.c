
#include <stdio.h>
#include <stdlib.h>

int prime( int);

int main(int argc, char *argv[])
{
   int n = 2;
   int count = 0;
 
   while(count < 100) // tant que le compteur n'est egale a 100, la boucle va afficher des nombres premiers
   {
      if(prime(n) == 1) // si le resultat de la fonction prime est egale a 1 alors  a joute +1 a count
      {
         count++;
         printf("%u\n", n);
      }
      n++;
   }
 
   return 0;
  
}

int prime( int n)
{

   int result = 1;
   int i = 0;
   for(i = 2; i <= (n + 1) / 2; i++)  // à toi de repenser la condition d'arrêt
   {
      if(n % i == 0)  // Ici la condition dit que si n est divisible par I alors 
      {
         result = 0;  // n n'est plus premier
      }
   }
 
   return result;
}
    