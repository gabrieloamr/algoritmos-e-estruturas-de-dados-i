#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor = 0;
    printf("Digite um número:\n");
    scanf("%d", &valor);

    if (valor % 2 == 0){
        printf("O número é par\n");

    } else {
        printf("O número é ímpar\n");
    }
    
    return 0;
}

