#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    int i, j, n;
    float mat[ordem][ordem];
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("Informe um numero inteiro: ");
            scanf("%f", &mat[i][j]);
        }
    }
    printf("A matriz eh:\n");
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Informe a linha desejada para fazer a soma  de 1 a 5: ");
    scanf("%d", &n);
    if(n >= 1 && n <= ordem){
        float soma=0;
        for(j=0; j<ordem; j++){
            soma = soma + mat[n-1][j];
        }
        printf("A soma da linha digitada eh: %.2f", soma);
    }

    getch();
}
