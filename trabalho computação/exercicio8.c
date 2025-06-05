#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 4
#define NCOL M
int multiplicaMatrizes(int a[][NCOL], int nla, int nca, int b[][NCOL], int nlb, int ncb, int c[][NCOL]);
void imprimirMatriz(int matriz[][NCOL], int linhas, int colunas);
void copiarMatriz(int destino[][NCOL], int origem[][NCOL], int linhas, int colunas);
int main() {
    int A[M][NCOL], B[M][NCOL], C[M][NCOL];
    int opcao, n;
    srand(time(NULL));
    printf("Gerando matrizes aleatorias...\n\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }
    printf("Matriz A (%dx%d):\n", M, M);
    imprimirMatriz(A, M, M);
    printf("\nMatriz B (%dx%d):\n", M, M);
    imprimirMatriz(B, M, M);
    do {
        printf("\n=== MENU ===\n");
        printf("1 - C = A * B\n");
        printf("2 - C = A²\n");
        printf("3 - C = A^n\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                if (multiplicaMatrizes(A, M, M, B, M, M, C)) {
                    printf("\nC = A * B:\n");
                    imprimirMatriz(C, M, M);
                } else {
                    printf("\nNao da pra multiplicar.\n");
                }
                break;
            case 2:
                if (multiplicaMatrizes(A, M, M, A, M, M, C)) {
                    printf("\nC = A²:\n");
                    imprimirMatriz(C, M, M);
                } else {
                    printf("\nErro.\n");
                }
                break;
            case 3:
                printf("Digite n: ");
                scanf("%d", &n);
                if (n < 1) {
                    printf("Erro\n");
                    break;
                }
                if (n == 1) {
                    copiarMatriz(C, A, M, M);
                } else {
                    copiarMatriz(C, A, M, M);
                    for (int i = 1; i < n; i++) {
                        int temp[M][NCOL];
                        copiarMatriz(temp, C, M, M);
                        if (!multiplicaMatrizes(temp, M, M, A, M, M, C)) {
                            printf("\nErro\n");
                            break;
                        }
                    }
                }
                printf("\nC = A^%d:\n", n);
                imprimirMatriz(C, M, M);
                break;
            case 0:
                printf("Tchau\n");
                break;
            default:
                printf("Opcao errada\n");
        }
    } while (opcao != 0);
    return 0;
}
int multiplicaMatrizes(int a[][NCOL], int nla, int nca, int b[][NCOL], int nlb, int ncb, int c[][NCOL]) {
    if (nca != nlb) {
        return 0;
    }
    for (int i = 0; i < nla; i++) {
        for (int j = 0; j < ncb; j++) {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < nla; i++) {
        for (int j = 0; j < ncb; j++) {
            for (int k = 0; k < nca; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return 1;
}
void imprimirMatriz(int matriz[][NCOL], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void copiarMatriz(int destino[][NCOL], int origem[][NCOL], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            destino[i][j] = origem[i][j];
        }
    }
}
