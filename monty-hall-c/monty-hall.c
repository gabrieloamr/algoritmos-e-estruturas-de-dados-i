#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Escolher porta
    printf("Escolha uma porta (1, 2, 3):\n");
    int portaEscolhida; 
    scanf("%d", &portaEscolhida);

    // Validando porta escolhida
    if (portaEscolhida < 1 || portaEscolhida > 3) {
        printf("Escolha inválida!");
    } else {
        // Sorteando porta
        srand (time(NULL));       
        int portaPremiada = rand() % 3 + 1; // 3 --> 0, 1, 2

        // Identificando e Revelando porta vazia
        int portaVazia = - 1;
        do {
            portaVazia = rand() % 3 + 1;    
        } while (portaVazia == portaPremiada || portaVazia == portaEscolhida); // || --> "ou"
        printf("A porta vazia é: %d\n", portaVazia);

        // Troca
        printf("Você deseja trocar de porta?\n");
        char opcao;
        scanf(" %c", &opcao); // tem que ter o espaço entre o " %c" e a primeira "aspa"
        int trocarPorta = (opcao == 's' || opcao == 'S');
        int portaEscolhidaOriginal = portaEscolhida;
        if (trocarPorta) {
            do {
                portaEscolhida = rand() % 3 + 1;
            } while (portaEscolhida == portaVazia || portaEscolhida == portaEscolhidaOriginal);
        
        printf("Você trocou para a porta: %d\n", portaEscolhida);
        }

        // Informando se ganhou ou perdeu
        if (portaEscolhida == portaPremiada) {
            printf("Parabéns, você ganhou!\n\n");
        } else
            printf("Você perdeu, a porta premiada era: %d\n", portaPremiada);

        // Demais informações
        printf("Porta premiada: %d\n", portaPremiada);
        printf("Porta vazia: %d\n", portaVazia);
        printf("Porta escolhida: %d\n", portaEscolhida);
        printf("Porta escolhida original: %d\n", portaEscolhidaOriginal);
        
    }

    return 0;
}
