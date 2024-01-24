#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    float mat[ordem][ordem];
    int i, j, n;

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
    printf("Informe o valor de N entre 1 e 5: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("%.2f ", mat[i][i]);
    }

    getch();
}
