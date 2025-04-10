#include <stdio.h>
#include <string.h>

int main()
{
    float media, nota1, nota2, nota3;
    int freq;
    char categoria[100];

    printf("Por favor digite");

    printf("\nPrimeira nota: ");
    scanf("%f", &nota1);

    printf("\nSegunda nota: ");
    scanf("%f", &nota2);

    printf("\nTerceira nota: ");
    scanf("%f", &nota3);

    printf("\nTerceira nota (entre 0 e 100): ");
    scanf("%d", &freq);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 8 && freq >= 75)
    {
        strcpy(categoria, "aprovado com distincao");

    }
    else if (media >= 6 && freq >= 75)
    {
        strcpy(categoria, "aprovado direto");

    }
    else if (
        (media >= 4 && media < 6) && freq > 75 ||
        (media >= 6 && freq < 75) ||
        (media >= 4 && (freq > 50 && freq < 75))
    )
    {
        strcpy(categoria, "para prova final");

    }
    else
    {
        strcpy(categoria, "reprovado");

    }

    printf("O aluno foi %s pois teve frequencia de %d%% e media %0.2f\n\n", categoria, freq, media);

    return 0;
}
