#include <stdio.h>

int somaMultiplos(int ini, int fim, int k){

    int soma = 0;

    for(int i = ini; i <= fim; i++){

        if(i % k == 0){
            soma += i;
        }
    }

    return soma;
}

int main(){
    int inicio, fim, k;

    printf("Digite o inicio e o fim: ");
    scanf("%d %d", &inicio, &fim);

    printf("Digite k: ");
    scanf("%d", &k);

    printf("Soma dos multiplos: %d", somaMultiplos(inicio, fim, k));

    return 0;
}
