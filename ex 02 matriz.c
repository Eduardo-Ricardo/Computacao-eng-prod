/**
2. Implemente um programa em C para gerar um triângulo de Pascal de Nlinhas em uma matriz de tamanho NˆN
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
