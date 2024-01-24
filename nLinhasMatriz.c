#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    int mat[ordem][ordem];
    int i, j, n, cont=0, contLinhas=0;

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
    printf("Informe um valor N:");
    scanf("%d", &n);
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            if(mat[i][j]==n){
                cont = cont + 1;
                break;
            }
        }
    }
    printf("A quantidade de linhas que possui o valor %d eh %d linhas", n, cont);

    getch();
}
