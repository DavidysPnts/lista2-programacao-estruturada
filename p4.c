#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max){
    *min = a;
    *max = a;

    if(b < *min)
        *min = b;
    if(b > *max)
        *max = b;

    if(c < *min)
        *min = c;
    if(c > *max)
        *max = c;
}

int main(){
    int a, b, c;
    int menor, maior;

    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    minMax(a, b, c, &menor, &maior);

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}