#include <stdio.h>

// ==============================
// FUNÇÕES RECURSIVAS PARA PEÇAS
// ==============================

// Recursividade para Torre (movimento horizontal)
void moverTorre(int passosRestantes) {
    if (passosRestantes == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(passosRestantes - 1); // chamada recursiva
}

// Recursividade para Rainha (movimento horizontal para a esquerda)
void moverRainha(int passosRestantes) {
    if (passosRestantes == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1); // chamada recursiva
}

// Recursividade + loops aninhados para Bispo (movimento diagonal para cima e direita)
void moverBispo(int passosRestantes) {
    if (passosRestantes == 0) return; // condição de parada

    // Loop externo: vertical (Cima)
    for (int i = 0; i < 1; i++) { 
        // Loop interno: horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(passosRestantes - 1); // chamada recursiva
}

int main() {
    // ==============================
    // SIMULAÇÃO DO MOVIMENTO DAS PEÇAS DE XADREZ - NÍVEL MESTRE
    // ==============================

    // ------------------------------
    // Movimento da TORRE
    // ------------------------------
    printf("Movimento da Torre:\n");
    moverTorre(5); // 5 casas para a direita

    // ------------------------------
    // Movimento do BISPO
    // ------------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(5); // 5 casas diagonais para cima e direita

    // ------------------------------
    // Movimento da RAINHA
    // ------------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(8); // 8 casas para a esquerda

    // ------------------------------
    // Movimento do CAVALO (loops complexos)
    // ------------------------------
    printf("\nMovimento do Cavalo:\n");

    int movimentosVertical = 2;    // duas casas para cima
    int movimentosHorizontal = 1;  // uma casa para a direita

    for (int v = 0; v < movimentosVertical; v++) {
        for (int h = 0; h <= movimentosHorizontal; h++) {
            if (h == 0) {
                printf("Cima\n"); // movimento vertical
            } else {
                printf("Direita\n"); // movimento horizontal
                break; // sair do loop horizontal após mover 1 casa
            }
        }
    }

    // ------------------------------
    // Fim da simulação
    // ------------------------------
    printf("\nSimulação concluída!\n");

    return 0;
}
