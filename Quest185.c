#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    float mat[ordem][ordem];
    int i, j;

    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("Informe um numero: ");
            scanf("%f", &mat[i][j]);
        }
    }
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<ordem; i++){
        float soma=0;
        for(j=0; j<ordem; j++){
            soma = soma + mat[i][j];
        }
        printf("A soma da linha %d eh %.2f\n", i+1, soma);
    }

    getch();
}
