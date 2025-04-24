#include <stdio.h>

int main(){
    float comprimento, largura;

    printf("Comprimento: ");
    scanf("%f", &comprimento);

    printf("Largura: ");
    scanf("%f", &largura);

    float perimetro = (largura + comprimento) * 2;
    float rodape = perimetro - 0.80;
    float area = comprimento * largura;

    printf("\nPerimetro total (m): %0.2f", perimetro);
    printf("\nRodape (m): %0.2f", rodape);
    printf("\nArea (m^2): %0.2f", area);

return 0;
}
