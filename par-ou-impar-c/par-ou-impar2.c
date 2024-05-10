#include <stdio.h>
#include <stdlib.h>

void parOuImpar() {
    int valor = 0;
    printf("Digite um número:\n");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O número é par");

    } else {
        printf("O número é ímpar");
    }
}

int main(void) {
    parOuImpar();
    return 0;
}