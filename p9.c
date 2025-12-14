#include <stdio.h>

int somaImpares(int x, int y){
    int soma = 0, i, temp;

    if(x > y){
        temp = x;
        x = y;
        y = temp;
    }

    for(i = x + 1; i < y; i++){
        if(i % 2 != 0)
            soma += i;
    }

    return soma;
}

int main(){
    int x, y;

    printf("Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    printf("%d\n", somaImpares(x, y));

    return 0;
}