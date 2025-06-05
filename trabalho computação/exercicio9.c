#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALUNOS 5
#define NUM_QUESTOES 10
#define NCOL NUM_QUESTOES

void criaMatriz(char respostas[][NCOL], int nl, int nc);
void imprimeMatriz(char matriz[][NCOL], int nl, int nc);
void compara(char gabarito[], char respostas[][NCOL], int nl, int nc, int pontua[]);

int main() {
    char gabarito[NUM_QUESTOES];
    char respostas[NUM_ALUNOS][NCOL];
    int pontuacao[NUM_ALUNOS] = {0};
    char opcoes[4] = {'a', 'b', 'c', 'd'};
    
    srand(time(NULL));
    
    printf("Gabarito da prova:\n");
    for (int i = 0; i < NUM_QUESTOES; i++) {
        gabarito[i] = opcoes[rand() % 4];
        printf("Questão %2d: %c\n", i + 1, gabarito[i]);
    }
    printf("\nRespostas dos alunos:\n");
    criaMatriz(respostas, NUM_ALUNOS, NUM_QUESTOES);
    imprimeMatriz(respostas, NUM_ALUNOS, NUM_QUESTOES);
    compara(gabarito, respostas, NUM_ALUNOS, NUM_QUESTOES, pontuacao);
    printf("\nPontuação dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, pontuacao[i]);
    }
    
    return 0;
}

void criaMatriz(char respostas[][NCOL], int nl, int nc) {
    char opcoes[4] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            respostas[i][j] = opcoes[rand() % 4];
        }
    }
}

void imprimeMatriz(char matriz[][NCOL], int nl, int nc) {
    printf("       ");
    for (int j = 0; j < nc; j++) {
        printf("Q%-2d ", j + 1);
    }
    printf("\n");
    for (int i = 0; i < nl; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < nc; j++) {
            printf("%c   ", matriz[i][j]);
        }
        printf("\n");
    }
}

void compara(char gabarito[], char respostas[][NCOL], int nl, int nc, int pontua[]) {
    for (int i = 0; i < nl; i++) {
        pontua[i] = 0;
        for (int j = 0; j < nc; j++) {
            if (respostas[i][j] == gabarito[j]) {
                pontua[i]++;
            }
        }
    }
}
