#include <stdio.h>
#include <stdlib.h>

typedef struct { // Cria uma struct para armazenar os dados de uma pessoa
  float Peso; // Define o campo Peso
  int Idade; // Define o campo Idade
  float Altura; // Define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

void ImprimePessoa(Pessoa P) { // Declara o parâmetro como uma struct
  printf("Idade: %d  Peso: %.2f Altura: %.2f\n", P.Idade, P.Peso, P.Altura);
}

int main() {
  Pessoa Joao, P2; // Declara a variável joao do tipo Pessoa
  Pessoa Povo[10]; // Declara o vetor Povo para 10 pessoas

  Joao.Idade = 15; // Inicializa o campo Idade de Joao
  Joao.Peso = 60.5;
  Joao.Altura = 1.75;

  Povo[4].Idade = 23;
  Povo[4].Peso = 75.3;
  Povo[4].Altura = 1.89;
  
  /* Outra vantagem de utilizar struct é a possibilidade de atribuir os dados de uma struct para outra, com apenas um comando de atribuição, como neste exemplo: */
  P2 = Povo[4];
  P2.Idade++; // Incrementa em 1 o campo Idade de P2

  // Chama a função que recebe a struct como parâmetro
  ImprimePessoa(Joao);
  ImprimePessoa(Povo[4]);
  ImprimePessoa(P2);

  return 0;
}