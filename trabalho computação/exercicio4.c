#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3
int main() {
    int matriz[TAMANHO][TAMANHO];
    int soma_linha[TAMANHO] = {0};
    int soma_coluna[TAMANHO] = {0};
    int soma_diag_principal = 0;
    int soma_diag_secundaria = 0;
    int eh_magico = 1;
    printf("Digite os numeros da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMatriz:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            soma_linha[i] += matriz[i][j];
            soma_coluna[j] += matriz[i][j];
            if (i == j) {
                soma_diag_principal += matriz[i][j];
            }
            if (i + j == TAMANHO - 1) {
                soma_diag_secundaria += matriz[i][j];
            }
        }
    }
    for (int i = 1; i < TAMANHO; i++) {
        if (soma_linha[i] != soma_linha[0]) {
            eh_magico = 0;
            break;
        }
    }
    if (eh_magico) {
        for (int j = 0; j < TAMANHO; j++) {
            if (soma_coluna[j] != soma_linha[0]) {
                eh_magico = 0;
                break;
            }
        }
    }
    if (eh_magico) {
        if (soma_diag_principal != soma_linha[0] || soma_diag_secundaria != soma_linha[0]) {
            eh_magico = 0;
        }
    }
    if (eh_magico) {
        printf("\nE um quadrado magico!\n");
        printf("Soma = %d\n", soma_linha[0]);
    } else {
        printf("\nNAO e um quadrado magico.\n");
    }
    return 0;
}
