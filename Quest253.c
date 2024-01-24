#include <stdio.h>
void pularLinhas(int n){
    if(n==1){
    }
    else{
        printf("\n");
        pularLinhas(n-1);
    }
}

int main(){

    int n;

    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    pularLinhas(n);

    return 0;
}