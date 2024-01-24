#include <stdio.h>
#include <conio.h>

void main(){

    int k, n, numAnt=1, numAtual=1, aux;

    printf("Informe um valor para N: ");
    scanf("%d", &n);

    for(k=1; k<=n; k++){
        printf("%d ", numAnt);

        aux = numAnt + numAtual;
        numAnt = numAtual;
        numAtual = aux;
    }
    getch();
}
