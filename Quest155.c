#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

void main(){

    int vet[tamanho];
    int k, n;

    for(k=0; k<tamanho; k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
    }
    printf("Informe uma posicao entre 1 e 10: ");
    scanf("%d", &n);
    if(n >= 1 && n <= tamanho){
        int resultado = vet[n-1];
        printf("O resultado eh: %d", resultado);
    }
    else{
        printf("Posicao invalida!");
    }

    getch();
}
