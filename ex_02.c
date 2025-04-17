#include <stdio.h>

int main(){
    int count;
    float media, num = 1;
    printf("Digite um valor para iniciar o programa,\npara parar, digite um valor igual a '-1000'.\n");

    while (num != -1000){
        printf("Nova entrada:");
        scanf("%f", &num);

        if (num > 0){
            count ++;
            media += num;
            printf("\nNovo numero positivo digitado!\n");
            printf("Soma: %0.1f     Quantidade: %d.\n", media, count);
            printf("Media atual do positivo: %0.1f.\n\n", media/count);
        }
    }

    printf("\nFinalizando programa...\n");
    return 0;

}
