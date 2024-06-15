// função recursiva para verificar se um elemento está presente no array

#include <stdio.h>
#include <stdlib.h>


int elementoPresente(int array[], int elemento, int tamanho) {
  if (tamanho < 0)
    return 0;
  if (array[tamanho] == elemento)
    return 1;
  return elementoPresente(array, elemento, tamanho - 1);
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int elemento;
  
  printf("Digite um número:\n");
  scanf("%d", &elemento);

  if (elementoPresente(array, elemento, 4))
    printf("O elemento está presente no array.\n");
  else
    printf("O elemento não está presente no array.\n");
  
  return 0;
}