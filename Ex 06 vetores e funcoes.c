/**
Faça duas funções: uma que imprima o conteúdo de um vetor em ordem direta (do primeiro ao último elemento) e
outra que imprima em ordem inversa (do último elemento até o primeiro).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

void preencherVetor(int v[], int n, int lim){
    for (int i = 0; i < n; i++){
        v[i] = rand() % (lim + 1);
    }
}

void ordemDireta(int vetor[], int n){
    printf("\n\nOdem Direta:\n");

    for(int i = 0; i < n; i++){
        printf("\nValor do vetor[%d] = %d", i, vetor[i]);
    }
}

void ordemInversa(int vetor[], int n){
    printf("\n\nOdem Inversa:\n");
    for(int i = ( n - 1 ); i >= 0; i--){
        printf("\nValor do vetor[%d] = %d", i, vetor[i]);
    }
}



int main(){
    srand(time(0));
    int n = TAMANHO + 1;

    while (n > TAMANHO){
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);
        // printf("\nn = %d", n );
    }

    int vetor[TAMANHO];

    // printf("\ntamanho vetor %d", sizeof(vetor)/sizeof(vetor[0]));

    preencherVetor(vetor, n, 100);

    ordemDireta(vetor, n);
    ordemInversa(vetor, n);

    return 0;
}
