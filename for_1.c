#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i=0; i <= 200; i++){
        if ((i % 2) == 0){
            if ((i % num) == 3){
                printf("%d\n\n", i);
            }
        }
    }

    return 0;
}
