#include <stdio.h>

// ===== FUNÇÃO RECURSIVA TORRE =====
void moverTorre(int passos) {
    if (passos <= 0) return;

    printf("Direita\n");
    moverTorre(passos - 1);
}

// ===== FUNÇÃO RECURSIVA BISPO =====
void moverBispoRec(int passos) {
    if (passos <= 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverBispoRec(passos - 1);
}

// ===== BISPO COM LOOPS ANINHADOS =====
void moverBispoLoop(int passos) {
    int i, j;

    for (i = 1; i <= passos; i++) {
        printf("Cima\n");

        for (j = 1; j <= 1; j++) {
            printf("Direita\n");
        }
    }
}

// ===== FUNÇÃO RECURSIVA RAINHA =====
void moverRainha(int passos) {
    if (passos <= 0) return;

    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// ===== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) =====
void moverCavalo(int passosVertical, int passosHorizontal) {
    int i, j;

    for (i = 1; i <= passosVertical; i++) {

        if (i > 2) break; // segurança

        printf("Cima\n");

        // Só faz o movimento horizontal no final
        if (i == passosVertical) {

            for (j = 1; j <= passosHorizontal; j++) {

                if (j == 0) continue; // exemplo de uso

                printf("Direita\n");
            }
        }
    }
}

// ===== FUNÇÃO PRINCIPAL =====
int main() {

    // ===== VARIÁVEIS =====
    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;
    int passosCavaloVertical = 2;
    int passosCavaloHorizontal = 1;

    // ===== TORRE =====
    printf("Movimento da Torre:\n");
    moverTorre(casastorre);

    printf("\n");

    // ===== BISPO (RECURSIVO) =====
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRec(casasbispo);

    printf("\n");

    // ===== BISPO (LOOPS) =====
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(casasbispo);

    printf("\n");

    // ===== RAINHA =====
    printf("Movimento da Rainha:\n");
    moverRainha(casasrainha);

    printf("\n");

    // ===== CAVALO =====
    printf("Movimento do Cavalo:\n");
    moverCavalo(passosCavaloVertical, passosCavaloHorizontal);

    return 0;
}