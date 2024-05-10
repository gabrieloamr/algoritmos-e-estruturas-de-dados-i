#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, aumento, novoSalario;

    printf("Digite o salário:\n");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento:\n");
    scanf("%f", &aumento);

    float valorAumento = salario * (aumento / 100);

    novoSalario = salario + valorAumento;

    printf("Valor do aumento: R$%f\n", valorAumento);
    printf("Salário após o aumento: R$%f\n", novoSalario);

    return 0;
}
