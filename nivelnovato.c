#include <stdio.h>

int main(){

// ===== DECLARAÇÃO DAS VARIÁVEIS ====
    int i;
    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;

// ===== MOVIMENTO DA TORRE (FOR) =====
printf("Movimento da Torre: \n");

for (i = 1; i <= casastorre; i++)
{
    printf("Direita\n");
}

// ===== MOVIMENTO DO BISPO (WHILE) =====
printf("Movimento do Bispo: \n");

i = 1;

while (i <= casasbispo)
{
    printf("Cima direita\n");
    i++;
}

// ===== MOVIMENTO DA RAINHA (DO-WHILE) =====
printf("Movimento da Rainha: \n");

i = 1;

do
{
    printf("Esquerda\n");
    i++;
} while (i <= casasrainha);







    return 0;
}