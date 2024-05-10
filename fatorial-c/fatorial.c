#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial;
    int resposta = 1;

    printf("Digite um número:\n");
    scanf("%d", &fatorial);


    for ( ; fatorial >= 1; fatorial--) { // não possui valor inicial
        resposta *= fatorial; // resposta = resposta * fatorial
    }
    
    printf("O fatorial do número é: %d\n", resposta);

    return 0;
}   