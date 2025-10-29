#include <stdio.h>

/*
  Programa: Movimentando as Peças do Xadrez
  Autor: Fabio Soares
  Descrição:
    Este programa simula o movimento de três peças de xadrez:
    - Torre: 5 casas para a direita (usando 'for')
    - Bispo: 5 casas na diagonal para cima e à direita (usando 'while')
    - Rainha: 8 casas para a esquerda (usando 'do-while')
*/

int main() {

    // ===============================
    // Movimento da TORRE (for)
    // ===============================
    int casas_torre = 5; // número de casas a mover
    printf("Movimento da TORRE:\n");
    
    // Torre se move em linha reta — usaremos 'for' para repetir 5 vezes
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // apenas para separar as saídas

    // ===============================
    // Movimento do BISPO (while)
    // ===============================
    int casas_bispo = 5;
    int i = 1;
    printf("Movimento do BISPO:\n");
    
    // Bispo se move em diagonal — "Cima, Direita"
    while (i <= casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // ===============================
    // Movimento da RAINHA (do-while)
    // ===============================
    int casas_rainha = 8;
    int j = 1;
    printf("Movimento da RAINHA:\n");
    
    // Rainha se move em qualquer direção — simularemos 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}
