#include <stdio.h>
#include <conio.h>
const int tamanhoAB = 50;
const int tamanhoC = 100;

int main() {
    int vetA[tamanhoAB], vetB[tamanhoAB], vetC[tamanhoC];
    int i, j, k=0;

    printf("Digite os valores para o vetor A (50 valores):\n");
    for (i = 0; i < tamanhoAB; i++) {
        scanf("%d", &vetA[i]);
    }

    printf("Digite os valores para o vetor B (50 valores):\n");
    for (i = 0; i < tamanhoAB; i++) {
        scanf("%d", &vetB[i]);
    }

    for (i = 0, j = 0; i < tamanhoAB && j < tamanhoAB; i++, j++) {
        vetC[k++] = vetA[i];
        vetC[k++] = vetB[j];
    }

    for (; i < tamanhoAB; i++) {
        vetC[k++] = vetA[i];
    }

    for (; j < tamanhoAB; j++) {
        vetC[k++] = vetB[j];
    }

    printf("Vetor intercalado:\n");
    for (i = 0; i < tamanhoC; i++) {
        printf("%d ", vetC[i]);
    }
    printf("\n");

    getch();
}
