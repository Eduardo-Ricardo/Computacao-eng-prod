#include <stdio.h>
int main (){
    float altura_parede, largura_parede;

    printf("Calculo de tinta!\nDigite a altura da parede: ");
    scanf("%f", &altura_parede);


    printf("Digite a largura da parede: ");
    scanf("%f", &largura_parede);

    float area_parede = (altura_parede * largura_parede);

    printf("\n\nAltura %0.2f m x Largura %0.2f m = Area %0.2f m", altura_parede, largura_parede, area_parede);

    float tinta_litros = area_parede / 2;
    int aux = tinta_litros;

    if (aux != tinta_litros){
        printf("\n\n%f , %d\n\n", tinta_litros, aux);
        tinta_litros = (aux + 1);
    }

    printf("\n\nLitros de tinta necessario(s): %f", tinta_litros);




}
