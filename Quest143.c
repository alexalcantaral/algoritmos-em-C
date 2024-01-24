#include <stdio.h>
#include <conio.h>

const int num = 10;

void main(){

    int n, k, test=0, maior=0, segMaior=0;

    for(k=1; k<=num; k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &n);

        if(maior < n){
            segMaior = maior;
            maior = n;
        }
        else if(n > segMaior && n != maior){
            segMaior = n;
        }
    }

    printf("O maior numero eh %d\n", maior);
    printf("O segundo maior numero eh %d\n", segMaior);
    int diferenca = maior - segMaior;
    printf("A diferenca desses numeros eh de %d\n", diferenca);

    getch();
}
