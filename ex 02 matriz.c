/**
2. Implemente um programa em C para gerar um tri�ngulo de Pascal de Nlinhas em uma matriz de tamanho N�N
**/

#include <stdio.h>

int main(){
    int linha;

    printf("Digite a quantidade de linhas: ");
    scanf("%d",&linha);

    for (int i = 0; i < linha; i++){
        for (int j = 0; j <= i; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
