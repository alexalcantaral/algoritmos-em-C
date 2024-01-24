#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    int mat[ordem][ordem];
    int i, j, n, soma=0, cont=0;

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
    printf("Informe um numero N: ");
    scanf("%d", &n);
    for(i=0; i<ordem; i++){
        soma = soma + mat[i][n-1];
        cont = cont + 1;
    }
    printf("A soma da coluna eh %d\n", soma);
    float media = (float)soma / cont;
    printf("A media da coluna eh %.2f", media);

    getch();
}
