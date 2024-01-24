#include <stdio.h>
#include <conio.h>

void main(){

    int k, i, num, aux=1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(k=1; k<=num; k++){
        for(i=1; i<=aux; i++){
            printf("*");
        }
        printf("\n");
        aux = aux + 1;
    }

    getch();
}
