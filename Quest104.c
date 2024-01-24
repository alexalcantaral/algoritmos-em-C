#include <stdio.h>
#include <conio.h>

void main(){

    int k, n, cont=0;

    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    for(k=1; k<=n; k++){
        if(n % k == 0 && n != k){
            cont = cont + k;
        }
    }

    if(cont == n){
        printf("O numero eh perfeito!!");
    }
    else{
        printf("O numero nao eh perfeito!!");
    }

    getch();
}
