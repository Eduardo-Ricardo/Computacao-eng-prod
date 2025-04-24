#include <stdio.h>

int main(){
    int num;
    int intervalo_i, intervalo_f;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &intervalo_i);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &intervalo_f);

    int soma = 0;
    for (int i = intervalo_i; i <= intervalo_f; i++){
        if ( ( i % num ) == 0){
            soma += i;
        }
    }

    printf("A soma dos multiplos de %d no intervalo: %d ", num, soma);

}
