#include <stdio.h>
#include <stdlib.h>

void exercicio2(int linhas) {
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= linhas - i; j ++) {
            printf(" "); //espaços
        }
        
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1) {
				printf("#");
			} else {
				printf("*");
			}

        }
        printf("\n");
    }
}

int main() {
    int linhas;

    printf("Digite o número de linhas:\n");
    scanf("%d", &linhas);

    exercicio2(linhas);

    return 0;
}