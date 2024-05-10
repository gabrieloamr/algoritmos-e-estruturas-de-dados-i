#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Informar idade:\n");
    scanf("%d", &idade);

    if (idade <= 5)
    printf("Bebê\n");
    else if (idade > 5 && idade <= 12)
    printf("Criança\n");
    else if (idade > 12 && idade <= 19)
    printf("Jovem\n");
    else if (idade > 19 && idade < 60)
    printf("Adulto\n");
    else
    printf("Idoso\n");

    return 0;
}