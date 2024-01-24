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
    printf("Informe um valor N de 1 ate 5: ");
    scanf("%d", &n);
    for(i=0; i<ordem; i++){
        if(mat[i][n-1]==0){
            cont = cont + 1;
        }
    }
    if(cont==ordem){
        printf("A coluna %d eh nula", n);
    }
    else{
        printf("A coluna nao eh nula!");
    }

    getch();
}
