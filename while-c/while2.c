#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;

    while (i != 0) {
        printf("Teste\n"); //verifica e depois executa até a condição ser satisfeita.
    }

    do {
        printf("Teste 2\n"); //executa e depois verifica e continua executando até a condição ser satisfeita.
    } while (i != 0);

    return 0;
}