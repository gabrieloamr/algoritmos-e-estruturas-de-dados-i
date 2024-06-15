#include <stdio.h>
#include <stdlib.h>

int saoPares(int array[], int tamanho, int index) {
  if (index == tamanho)
    return 1;
  if (array[index] % 2 != 0)
    return 0;
  return saoPares(array, tamanho, index + 1);
}

int main(){
  int array[] = {2, 4, 5, 8, 10};
  int tamanho = sizeof(array) / sizeof(array[0]);
  int resultado = saoPares(array, tamanho, 0);
  if (resultado)
    printf("Todos os elementos do array são pares.\n");
  else
    printf("Pelo menos um elemento do array não é par.\n");

  return 0;
}