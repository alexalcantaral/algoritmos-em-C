#include <stdio.h>
#include <conio.h>

void main(){

    int n, k, numAnt=1, numAtual=1, aux;

    printf("Informe um numero N: ");
    scanf("%d", &n);

    for(k=1; k<=n-2; k++){
        aux = numAnt + numAtual;
        numAnt = numAtual;
        numAtual = aux;
        if(numAtual == n){
            printf("O numero pertence a serie Fibonacci\n");
        }
    }
        if(numAtual != n*2){
            printf("O numero nao pertence a serie Fibonacci\n");
        }

    getch();
}
