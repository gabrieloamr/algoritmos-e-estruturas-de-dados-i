#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    printf("Insira um número de 1 a 5:\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("primeiro\n");
        break;
    case 2:
        printf("segundo\n");
        break;
    case 3:
        printf("terceiro\n");
        break;
    case 4:
        printf("quarto\n");
        break;
    case 5:
        printf("quinto\n");
        break;    
    default:
        printf("opcão não válida\n");
        break;
    }

    return 0;
}