#include <stdio.h>
#include <stdlib.h>

int  mirror(char *str1)
{
    
  char* str2;
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
    char* s = NULL;
    printf("Ecriver un mot : ");
    gets(s); 
    printf("Le miroir du mot est : ");
    s = (char *) malloc(sizeof(char));
    mirror(s);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int length(char *);
char * reverseWithDynamicMemory(char *, int);
char * reverseWithoutDynamicMemory(char *, int, char *);

int main() {
    char *pWord = "Computer";
    int wordLength = length(pWord);
    char reverseWordWithouDynamicMemory[wordLength];
    
    printf("Word Lenght: %d\n", wordLength);
    printf("\nReverse with Dynamic Memory: %s\n", reverseWithDynamicMemory(pWord, wordLength));
    printf("Reverse without Dynamic Memory: %s\n\n", reverseWithoutDynamicMemory(pWord, wordLength, reverseWordWithouDynamicMemory));
    
    return 0;
}

int length(char *pWord) {
    int i;
    for (i = 0; *(pWord + i) != '\0'; i++);
    return i;
}

char * reverseWithDynamicMemory(char *pWord, int length) {
    int i = 0, end = length - 1;
    char *reverseWord = (char *) malloc(sizeof(char) * length);
    if(!reverseWord) {
        printf("\nError allocating memory for reverseWord...\n");
        exit(EXIT_FAILURE);
    }

    while (i < end || end >= 0) {
        reverseWord[i] = pWord[end];
        end--;
        i++;
    }

    reverseWord[length] = '\0';
    return reverseWord;
}
char * reverseWithoutDynamicMemory(char *pWord, int length, char *reverseWord) {
    int i = 0, end = length - 1;

    while (i < end || end >= 0) {
        reverseWord[i] = pWord[end];
        end--;
        i++;
    }

    reverseWord[length] = '\0';
    return reverseWord;
}

*/