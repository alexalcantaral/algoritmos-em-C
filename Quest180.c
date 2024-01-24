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
    printf("Essa eh a matriz digitada:\n");
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Informe um numero N: ");
    scanf("%d", &n);
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            if(mat[i][j]==n){
                cont = cont + 1;
            }
        }
    }
    printf("O numero de %d aparece %d vezes na matriz", n, cont);

    getch();
}
