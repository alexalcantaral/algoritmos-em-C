#include <stdio.h>
#include <conio.h>
const int ordem = 4;

void main(){

    int mat[ordem][ordem];
    int i, j, n, cont=0;

    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("Informe um numero: ");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Informe um numero N:");
    scanf("%d", &n);
    for(j=0; j<ordem; j++){
        if(mat[n-1][j]==0){
            cont = cont + 1;
        }
    }
    if(cont==ordem){
        printf("A linha eh nula");
    }
    else{
        printf("A linha nao eh nula");
    }

    getch();
}
