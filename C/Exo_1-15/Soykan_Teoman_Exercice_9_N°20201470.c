#include <stdio.h>
#include <stdlib.h>

unsigned int fact(unsigned int);

int main(int argc, char *argv[])
{
    unsigned int n;

    printf("Entrer un nonmbre : ");
    scanf("%u", &n);

    printf("fact(%u) = %u\n", n, fact(n));

    return 0;
}

unsigned int fact(unsigned int n)
{
  int x;
  int f = 1;

  for (x = 1; x <= n; x++)
{
    f *= x;
}
  return f;
}