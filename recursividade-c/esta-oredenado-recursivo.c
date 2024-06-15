// Função recursiva para verificar se um array está ordenado de forma crescente

#include <stdio.h>
#include <stdlib.h>

int estaOrdenado(int array[], int tamanho) {
  if (tamanho <= 1)
    return 1;
  if (array[tamanho - 1] < array[tamanho - 2])
    return 0;
  return estaOrdenado(array, tamanho - 1);
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int tamanho = sizeof(array) / sizeof(array[0]);
  if (estaOrdenado(array, tamanho))
    printf("O array está ordenado de forma crescente.\n");
  else
    printf("O array não está ordenado de forma crescente.\n");

  return 0;
}