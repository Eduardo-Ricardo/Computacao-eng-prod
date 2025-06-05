#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
void criarMatrizes(int matriz1[][TAM], int matriz2[][TAM]);
void imprimirMatrizes(int matriz1[][TAM], int matriz2[][TAM]);
void somarMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]);
void subtrairMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]);
void multiplicarConstante(int matriz[][TAM], int resultado[][TAM], int constante);
void imprimirMatriz(int matriz[][TAM]);
int main() {
    int opcao;
    int matriz1[TAM][TAM], matriz2[TAM][TAM], resultado[TAM][TAM];
    int matrizesCriadas = 0;
    int constante;
    srand(time(NULL));
    do {
        printf("\n=== MENU ===\n");
        printf("(0) Criar matrizes\n");
        printf("(1) Mostrar matrizes\n");
        printf("(2) Somar matrizes\n");
        printf("(3) Subtrair matrizes\n");
        printf("(4) Multiplicar por constante\n");
        printf("(5) Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 0:
                criarMatrizes(matriz1, matriz2);
                matrizesCriadas = 1;
                printf("Matrizes criadas!\n");
                break;
            case 1:
                if (matrizesCriadas) {
                    imprimirMatrizes(matriz1, matriz2);
                } else {
                    printf("Cria as matrizes primeiro!\n");
                }
                break;
            case 2:
                if (matrizesCriadas) {
                    somarMatrizes(matriz1, matriz2, resultado);
                    printf("Resultado da soma:\n");
                    imprimirMatriz(resultado);
                } else {
                    printf("Cria as matrizes primeiro!\n");
                }
                break;
            case 3:
                if (matrizesCriadas) {
                    subtrairMatrizes(matriz1, matriz2, resultado);
                    printf("Subtracao (segunda - primeira):\n");
                    imprimirMatriz(resultado);
                } else {
                    printf("Cria as matrizes primeiro!\n");
                }
                break;
            case 4:
                if (matrizesCriadas) {
                    printf("Valor da constante: ");
                    scanf("%d", &constante);
                    multiplicarConstante(matriz1, resultado, constante);
                    printf("Resultado da multiplicacao por %d:\n", constante);
                    imprimirMatriz(resultado);
                } else {
                    printf("Cria as matrizes primeiro!\n");
                }
                break;
            case 5:
                printf("Tchau!\n");
                break;
            default:
                printf("Opcao errada!\n");
        }
    } while (opcao != 5);
    return 0;
}
void criarMatrizes(int matriz1[][TAM], int matriz2[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz1[i][j] = rand() % 100;
            matriz2[i][j] = rand() % 100;
        }
    }
}
void imprimirMatrizes(int matriz1[][TAM], int matriz2[][TAM]) {
    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);
    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2);
}
void imprimirMatriz(int matriz[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void somarMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
void subtrairMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz2[i][j] - matriz1[i][j];
        }
    }
}
void multiplicarConstante(int matriz[][TAM], int resultado[][TAM], int constante) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz[i][j] * constante;
        }
    }
}
