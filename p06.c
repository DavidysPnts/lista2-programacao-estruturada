#include <stdio.h>

int somaDivisores(int n, int d){
    if(d == 0)
        return 0;

    if(n % d == 0)
        return d + somaDivisores(n, d - 1);
    else
        return somaDivisores(n, d - 1);
}

int amigos(int a, int b){
    if(somaDivisores(a, a - 1) == b && somaDivisores(b, b - 1) == a)
        return 1;
    else
        return 0;
}

int main(){
    int a, b;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);

    if(amigos(a, b))
        printf("Amigos\n");
    else
        printf("Nao sao amigos\n");

    return 0;
}
