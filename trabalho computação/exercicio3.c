#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main() {
    int matriz[TAM][TAM];
    int maior = 0, linha_maior = 0, coluna_maior = 0;
    int minimax, linha_minimax, coluna_minimax;
    srand(time(NULL));
    printf("Matriz:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100;
            printf("%2d ", matriz[i][j]);
            if (matriz[i][j] > maior || (i == 0 && j == 0)) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
        printf("\n");
    }
    minimax = matriz[linha_maior][0];
    coluna_minimax = 0;
    for (int j = 1; j < TAM; j++) {
        if (matriz[linha_maior][j] < minimax) {
            minimax = matriz[linha_maior][j];
            coluna_minimax = j;
        }
    }
    linha_minimax = linha_maior;
    printf("\nMaior elemento: %d (linha %d, coluna %d)\n", maior, linha_maior, coluna_maior);
    printf("Minimax: %d (linha %d, coluna %d)\n", minimax, linha_minimax, coluna_minimax);
    return 0;
}
