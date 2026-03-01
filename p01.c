#include <stdio.h>

int somaDigitos(int n){
    int digito;

    if(n < 1){
        digito = n % 10;
        return digito;
    } 

    else{
        digito = n % 10;
        n /= 10;
        
        return digito + somaDigitos(n);
    }
}

int main(){
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    printf("Soma dos algarismos: %d", somaDigitos(num));

    return 0;
}
