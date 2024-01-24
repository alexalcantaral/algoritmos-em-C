#include <stdio.h>
int fatorial(int num){
    if(num==1){
        return 1;
    }
    return num * fatorial(num-1);
}

int main(){

    int num;

    printf("Informe um numero inteiro nao negativo: ");
    scanf("%d", &num);

    int valFatorial = fatorial(num);

    printf("O fatoria de %d eh %d", num, valFatorial);

    return 0;
}