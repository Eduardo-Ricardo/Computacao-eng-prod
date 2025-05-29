/**
Implemente um programa em C que preencha com valores aleatórios uma matriz de dimensão 5 ˆ5 e imprima matriz
e depois sua transposta.
**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(0));
    int matriz[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            matriz[i][j] = rand() % (100 + 1);
            printf("[%d]\t", matriz[i][j]);
        }
        printf("\n");

    }

    return 0;
}
