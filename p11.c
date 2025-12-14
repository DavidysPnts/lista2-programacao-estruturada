#include <stdio.h>

void reduz(int *a, int *b){
    int cont = 0;

    while(*a != *b) {
        if(*a > *b)
            *a = *a - *b;
        else
            *b = *b - *a;

        cont += 1;
    }

    printf("%d\n", cont);
}

int main(){
    int a, b;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);

    reduz(&a, &b);

    return 0;
}