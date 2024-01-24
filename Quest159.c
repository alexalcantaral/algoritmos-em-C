#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

void main(){

    int vet[tamanho];
    int k, m, n;

    for(k=0; k<tamanho; k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
    }
    printf("Informe as posições que voce deseja inverter: ");
    scanf("%d%d", &m, &n);

    printf("O vetor inicial:\n");
    for(k=0; k<tamanho; k++){
        printf("%d  ", vet[k]);
    }

    int aux = vet[m-1];
    vet[m-1] = vet[n-1];
    vet[n-1] = aux;

    printf("\nO vetor apos a troca de posicoes:\n");
    for(k=0; k<tamanho; k++){
        printf("%d  ", vet[k]);
    }

    getch();
}
