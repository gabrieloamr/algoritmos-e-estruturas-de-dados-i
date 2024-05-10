#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioAntigo, salarioNovo;

    printf("Digite seu salário:\n");
    scanf("%f", &salarioAntigo);

    salarioNovo = salarioAntigo * 1.25;

    printf("Seu novo salário é: %f\n", salarioNovo);

    return 0;
}