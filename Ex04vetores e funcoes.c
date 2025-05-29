/**
Considere o pr�tipo da fun��o abaixo
Prot�tipo: void preencheVetor(int v[], int n, int lim);
Implemente a fun��o de forma que ela preencha
um vetor v
de n posi��es
com valores aleat�rios [0,lim].
Aten��o: use essa fun��o para preencher vetores nos exerc�cios seguintes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100
void preencherVetor(int v[], int n, int lim){
        for (int i = 0; i < n; i++){
            v[i] = rand() % (lim + 1);
            printf("\nValord de v[%d] == %d", i, v[i]);
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

    return 0;
}
