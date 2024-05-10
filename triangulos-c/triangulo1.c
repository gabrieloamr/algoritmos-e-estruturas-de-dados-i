#include <stdio.h>
#include <stdlib.h>

// Exibe o padrão de asteriscos em forma de triângulo

void exercicio1(int linhas) {
	printf("Padrão de asteriscos:\n");
	
	for (int i = 1; i <= linhas; i++) {
		// Loop para exibir os espaços em branco antes dos asteriscos
		for (int j = 1; j <= linhas - i; j++) {
			printf(" ");
		}
		// Loop para exibir os asteriscos
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
    int linhas;

    // Solicita ao usuário para inserir um número inteiro positivo
    printf("Digite o número de linhas (maior que 0):\n");
    scanf("%d", &linhas);

	exercicio1(linhas);

    return 0;
}