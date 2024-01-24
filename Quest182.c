#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    float mat[ordem][ordem];
    int i, j;
    float maior=-9999;

    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("Informe um numero: ");
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
    printf("A diagonal principal da matriz:\n");
    for(i=0; i<ordem; i++){
        printf("%.2f ", mat[i][i]);
    }
    for(i=0; i<ordem; i++){
        if(mat[i][i]>maior){
            maior = mat[i][i];
        }
    }
    printf("\nO maior valor da diagonal principal eh %.2f", maior);


    getch();
}
