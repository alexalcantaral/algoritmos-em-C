#include <stdio.h>
#include <conio.h>

const int numeros = 10;

void main(){

    int num, k, i, fatorial=1;

    for(k=numeros; k>=1; k--){
        printf("\nInforme o numero inteiro: ");
        scanf("%d", &num);
        for(i=num; i>=1; i--){
            fatorial = fatorial * i;
        }
        printf("O fatorial desse numero eh %d", fatorial);
        fatorial = 1;
    }

    getch();
}
