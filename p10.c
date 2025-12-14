#include <stdio.h>

void fatoresPrimos(int n, int dv){

    if(n == 1)
        return;

    if(n % dv == 0) {
        printf("%d ", dv);
        fatoresPrimos(n / dv, dv);
    } else {
        fatoresPrimos(n, dv + 1);
    }
}

int main(){
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    if(n > 1)
        fatoresPrimos(n, 2);

    return 0;
}