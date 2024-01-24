#include <stdio.h>
#include <conio.h>

void main(){

    int ordem, i, j, peca=1;
    printf("Informe o tamanho do tabuleiro: ");
    scanf("%d", &ordem);
    int mat[ordem][ordem];

    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            mat[i][j]=peca;
            peca *= 2;
        }
    }
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%d

                   ()", mat[i][j]);
        }
        printf("\n");
    }
    getch();
}
