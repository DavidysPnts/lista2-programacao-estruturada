#include <stdio.h>

int PositivosEMedia(float *media){
    float x, soma = 0;
    int i, cont = 0;

    for(i = 0; i < 6; i++){

        printf("Valor de x: ");
        scanf("%f", &x);

        if(x > 0){
            soma += x;
            cont += 1;
        }
    }

    if(cont > 0)
        *media = soma / cont;
    else
        *media = 0;

    return cont;
}

int main(){
    float media;
    int qtd;

    qtd = PositivosEMedia(&media);

    printf("%d\n", qtd);
    printf("%.2f\n", media);

    return 0;
}