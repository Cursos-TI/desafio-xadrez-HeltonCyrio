#include <stdio.h>

int main() {

    // ==============================
    // 1) Movimento da TORRE (for)
    // ==============================
    int casasTorre = 5; // número de casas para mover a Torre

    printf("=== Movimento da Torre (5 casas para a Direita) ===\n");

    // A Torre anda em linha reta → usando FOR
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    // ==============================
    // 2) Movimento do BISPO (while)
    // ==============================
    int casasBispo = 5; // número de casas para mover o Bispo
    int contadorBispo = 0;

    printf("=== Movimento do Bispo (5 casas na diagonal Cima + Direita) ===\n");

    // O Bispo anda na diagonal → usando WHILE
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");


    // ==============================
    // 3) Movimento da RAINHA (do-while)
    // ==============================
    int casasRainha = 8; // número de casas para mover a Rainha
    int contadorRainha = 0;

    printf("=== Movimento da Rainha (8 casas para a Esquerda) ===\n");

    // A Rainha pode andar em qualquer direção → usando DO-WHILE
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    printf("\n");

    return 0;
}