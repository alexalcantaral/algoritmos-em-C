#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

void main(){

    int vetor[10], i, j, temp;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    getch();
}
