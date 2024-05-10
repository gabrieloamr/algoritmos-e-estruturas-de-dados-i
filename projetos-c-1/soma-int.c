#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, resultado;

    printf("Digite o primeiro número:\n");
    scanf("%d", &n1);

    printf("Digite o segundo número:\n");
    scanf("%d", &n2);

    printf("Digite o terceiro número:\n");
    scanf("%d", &n3);

    printf("Digite o quarto número:\n");
    scanf("%d", &n4);

    resultado = n1 + n2 + n3 + n4;

    printf("O resultado da soma é: %d\n", resultado);

    return 0;
}