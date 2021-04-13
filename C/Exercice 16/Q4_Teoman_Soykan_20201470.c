#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int longueur(char* chaine){
    
    int nbcaracteres = 0;
    
    while (chaine[nbcaracteres] != '\0'){
    nbcaracteres++;
    }
    return nbcaracteres;
}

char* mirror(char* str, int n)
{
    char * temp = malloc(n * sizeof(char));
    int j = 0;
     
    for(int i = n-1 ; i>=0; i--){
        
            temp[j] = str[i];
            j++;
    }
    
    return temp;
}

unsigned int palindrome(char* str1, char* str2) {
    int i = longueur(str1);
    int j = longueur(str2);
    int k = 0;
    int state = true;
    char* res;
    res = mirror(str2, j);

    if(i == j) {
        while(str1[k] != '\0') {
            if(str1[k] == res[k])
                state = true;
            else 
                state = false;
            k++;
        }
    }
    else {
        state = false;
        return 1;
    }

    if(state)
        printf("Les deux chaines sont miroirs\n");
    else
        printf("Les deux chaines ne sont pas miroirs\n");
        
    return 0;
}

int main () {
    char a[100], b[100];
    printf("Entrez une chaine\n");
    scanf("%s", &a);

    printf("Entrez une autre chaine\n");
    scanf("%s", &b);

    palindrome(a, b);

    return 0;
}