#include <stdio.h>

int main() {
    // ==============================
    // SIMULAÇÃO DO MOVIMENTO DAS PEÇAS DE XADREZ
    // ==============================
    // Peças: Torre, Bispo, Rainha e Cavalo
    // Estruturas usadas:
    // Torre  -> for
    // Bispo  -> while
    // Rainha -> do-while
    // Cavalo -> loops aninhados (for + while)
    // ==============================

    // ------------------------------
    // Movimento da TORRE (5 casas para a direita)
    // ------------------------------
    printf("Movimento da Torre:\n");
    int i; // variável de controle para o loop 'for'
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ------------------------------
    // Movimento do BISPO (5 casas na diagonal para cima e à direita)
    // ------------------------------
    printf("\nMovimento do Bispo:\n");
    int j = 1; // variável de controle para o loop 'while'
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // ------------------------------
    // Movimento da RAINHA (8 casas para a esquerda)
    // ------------------------------
    printf("\nMovimento da Rainha:\n");
    int k = 1; // variável de controle para o loop 'do-while'
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // ------------------------------
    // Movimento do CAVALO (2 casas para baixo e 1 para a esquerda)
    // ------------------------------
    printf("\nMovimento do Cavalo:\n");

    int movimentosBaixo = 2;     // número de casas para baixo
    int movimentosEsquerda = 1;  // número de casas para a esquerda

    // Loop externo (for) -> controla o movimento para baixo
    for (int a = 1; a <= movimentosBaixo; a++) {
        printf("Baixo\n");
    }

    // Loop interno (while) -> controla o movimento para a esquerda
    int b = 1;
    while (b <= movimentosEsquerda) {
        printf("Esquerda\n");
        b++;
    }

    // ------------------------------
    // Fim da simulação
    // ------------------------------
    printf("\nSimulação concluída!\n");

    return 0;
}
