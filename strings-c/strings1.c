#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char string1[] = "Hello"; //"char" é pra declarar variáveis do tipo "caractere"
    char string2[10];

    strcpy(string2, "World");
    
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    return 0;
}