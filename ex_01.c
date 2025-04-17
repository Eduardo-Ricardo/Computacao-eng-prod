#include <stdio.h>

int main(){
    int num = 1, maior;
    printf("Digite um valor para iniciar o programa,\npara parar, digite um valor menor ou igual a zero.\n");
    scanf("%d", &maior);

    while (num > 0){
        printf("\nMaior numero digitado: %d\n", maior );
               printf("Nova entrada:");
        scanf("%d", &num);

        if (maior < num){
            maior = num;
            printf("Novo numero maior armazenado! (%d).\n", maior);
        }
    }

    printf("\nFinalizando programa...\nMaior numero armazenado: %d\n\n", maior);
    return 0;

}
