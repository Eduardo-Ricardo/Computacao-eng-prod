#include <stdio.h>
#include <math.h>


int qtdRaiz(float a, float b, float c, // passado por valor
            float *x1, float *x2){     // passado por referencia
    // delta  = b² - 4ac

    float delta;
    int qtd;

    delta = pow(b, 2) - 4 * a * c;


    printf("\nValor de delta = %f",delta);

    if(delta < 0){
        qtd = 0;

    } else if(delta == 0) {
        qtd = 1;
        *x1 = -b / ( 2 * a );

    } else{
        qtd = 2;
        *x1 = ( sqrt(delta) - b ) / ( 2 * a );
        *x2 = (-sqrt(delta) - b ) / ( 2 * a );

    }

    return qtd;
}

int main(){


    float x1, x2;
    float a = 6, b = 5, c =0;

    printf("Valor de x1 = %f\nValor de x2 = %f\n\n", x1, x2);


    printf("Dada a funcao: a = %f, b = %f, c = %f", a, b ,c);

    printf("\nTem %d raiz(es)", qtdRaiz(a, b, c, &x1, &x2));

    printf("\nValor de x1 = %f\nValor de x2 = %f", x1, x2);

    return 0;
}
