#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    int i, j, n;
    float mat[ordem][ordem];

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
    printf("Acima da diagonal principal:\n");
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            if(i < j){
                printf("%.2f ", mat[i][j]);
            }
        }
    }
    printf("\nAbaixo da diagonal principal:\n");
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            if(i > j){
                printf("%.2f ", mat[i][j]);
            }
        }
    }

    getch();
}
