#include <stdio.h>
#include <stdlib.h>

unsigned int longeur(char *c)
{
    unsigned int longeur = 0;
    while (c[longeur] != '\0')
    {
        longeur++;
    }
    return longeur;
}

char *add(char *a, char *b)
{
    unsigned int r = 0;
    char *result;
    unsigned int j, i;
    if (longeur(a) >= longeur(b))
    { 
        result = (char *)malloc((longeur(a) + 2) * sizeof(char));
        j = longeur(a);
           
    for(i=0; i<j; i++)
    {
       a[i];
    }

    }
    else
    {
        result = (char *)malloc((longeur(b) + 2) * sizeof(char));
        j = longeur(b);
           
    for(i=0; i<j; i++)
    {
       b[i];
    }

    }
    
    
    for (i = j-1; i>=0; i--)
    {
        if (a[i] == '1' && b[i] == '1'){

            if (r == 1){
                result[i] = '1';
                r = 1;

            }else{
                result[i] = '0';
                r = 1;
            }
        }
        else if (a[i] == '1' && b[i] == '0')
        {

            if (r == 1)
            {
                result[i] = '0';
                r = 1;
            }
            else
            {
                result[i] = '1';
                r = 0;
            }
        }
        else if (a[i] == '0' && b[i] == '1')
        {

            if (r == 1)
            {
                result[i] = '0';
                r = 1;
            }
            else
            {
                result[i] = '1';
                r = 0;
            }
        }
        else if (a[i] == '0' && b[i] == '0')
        {

            if (r == 1)
            {
                result[i] = '1';
                r = 0;
            }
            else
            {
                result[i] = '0';
                r = 0;
            }
        }
        
    if (r == 1)
    {
        result[i + 1] = '1';
    }
    else
    {
        result[i + 1] = '0';
    }
     result[i + 2] = '\0';
    }
    
return result;
}

int main()
{
    char *a;
    char *b;
    printf("Entrer une premiere chaine de caractere :");
    scanf("%ms", &a);
    printf("Entrer une deuxieme chaine de caractere :");
    scanf("%ms", &b);
    printf("%s", add(a, b));
}