#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    int mat[ordem][ordem];
    int i, j, n, cont=0;

    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Informe a linha N de 1 a 5: ");
    scanf("%d", &n);
    for(j=0; j<ordem; j++){
        if(mat[n-1][j] % 2 == 0){
            cont = cont + 1;
        }
    }
    printf("A quantidade de numeros pares da linha %d eh %d", n, cont);
    }
