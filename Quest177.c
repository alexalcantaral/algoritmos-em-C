#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    int i, j;
    float mat[ordem][ordem];
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("Informe um numero real: ");
            scanf("%f", &mat[i][j]);
        }
    }
    printf("A matriz transposta eh:\n");
    for(j=0; j<ordem; j++){
        for(i=0; i<ordem; i++){
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }

    getch();
}
