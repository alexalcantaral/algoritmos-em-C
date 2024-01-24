#include <stdio.h>
#include <conio.h>

void main(){

    int n, k, numAnt=1, numAtual=1, aux;

    printf("Informe um valor para N: ");
    scanf("%d", &n);

    for(k=1; k<=n-2; k++){
        aux = numAnt + numAtual;
        numAnt = numAtual;
        numAtual = aux;
    }
    printf("O enesimo termo eh %d", numAtual);

    getch();
}
