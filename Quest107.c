/*Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números primos do intervalo [M, N*/

#include <stdio.h>

void main(){
    int k,j,m,n,cont=0,totprim=0;
    float soma=0;
    printf("Digite M: ");
    scanf("%d", &m);
    printf("Digite N: ");
    scanf("%d", &n);

    for(j=m;j<=n;j++){
        for(k=1;k<=n;k++){
            if(j%k==0){
                cont++;
            }
        }
        if(cont==2){
            soma = soma + j;
            totprim++;
        }
        cont=0;
    }
    float media=soma/totprim;
    printf("a media e %.2f", media);
}
