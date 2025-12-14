#include <stdio.h>

int inverte(int n, int acumulador){
    if(n == 0)
        return acumulador;

    return inverte(n / 10, acumulador * 10 + (n % 10));
}

int ehPalindromo(int n){
    if(n == inverte(n, 0))
        return 1;
    else
        return 0;
}

int main(){
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if(ehPalindromo(n))
        printf("Palindromo\n");
    else
        printf("Nao  e palindromo\n");

    return 0;
}
