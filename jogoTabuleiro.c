#include<stdio.h>

int main(){
    int ordem;
    printf("Informe a ordem da matriz: ");
    scanf("%d", &ordem);

    int mat[ordem][ordem];

    int peca = 1;

    for(int i = 0; i < ordem; i ++){
        for(int j = 0; j < ordem; j++){
            mat[i][j] = peca;
            peca *= 2;
        }
    }

    for(int i = 0; i < ordem; i ++){
        for(int j = 0; j < ordem; j++){
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}
