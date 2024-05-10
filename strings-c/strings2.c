#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char minhaString[] = "Exemplo";

    //Calcula o comprimento da string
    //int
    size_t comprimento = strlen(minhaString);

    printf("string: %s\n", minhaString);
    printf("Comprimento: %zu\n", comprimento);

    return 0;
}