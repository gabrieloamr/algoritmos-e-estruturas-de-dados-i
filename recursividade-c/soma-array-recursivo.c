#include <stdio.h>
#include <stdlib.h>

int somaArray (int array[], int tamanho) {
  if (tamanho == 0) {
    return 0;
  } else {
    return array[tamanho - 1] + somaArray(array, tamanho - 1);
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int tamanho = sizeof(array) / sizeof(array[0]);
  int resultado = somaArray(array, tamanho);
  
  printf("A soma dos elementos do array é: %d\n", resultado);
  
  return 0;
}