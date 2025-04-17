#include <stdio.h>

int main()
{
    int ex;
    printf("Escolha o exercicio (1 ou 2): ");
    scanf("%d", &ex);
    if (ex == 1)
    {

        int num = 1, maior;
        printf("Digite um valor para iniciar o programa,\npara parar, digite um valor menor ou igual a zero.\n");
        scanf("%d", &maior);

        while (num > 0)
        {
            printf("\nMaior numero digitado: %d\n", maior );
            printf("Nova entrada:");
            scanf("%d", &num);

            if (maior < num)
            {
                maior = num;
                printf("Novo numero maior armazenado! (%d).\n", maior);
            }
        }

        printf("\nFinalizando programa...\nMaior numero armazenado: %d\n\n", maior);
        return 0;
    }
    else if (ex == 2)
    {

        int count;
        float media, num = 1;
        printf("Digite um valor para iniciar o programa,\npara parar, digite um valor igual a '-1000'.\n");

        while (num != -1000)
        {
            printf("Nova entrada:");
            scanf("%f", &num);

            if (num > 0)
            {
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

}
