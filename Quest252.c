#include <stdio.h>
int somaIntervalo(int m, int n){
    if(m==n){
        return n;
    }
    return m + somaIntervalo(m+1, n);
}

int main(){

    int m, n;

    printf("Informe um numero M: ");
    scanf("%d", &m);
    printf("Informe um numero N: ");
    scanf("%d", &n);

    if(m<n){
        int valSoma = somaIntervalo(m, n);
        printf("A soma dos intervalos de M e N eh %d", valSoma);
    }
    else{
        printf("O valor de M eh maior ou igual a N!");
    }

    return 0;
}