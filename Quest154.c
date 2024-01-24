#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

void main(){

    int vet[tamanho];
    int k;

    for(k=0; k<tamanho; k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
    }
    printf("Os numeros informados foram:\n");
    for(k=tamanho-1; k>=0; k--){
        printf("%d  ", vet[k]);
    }

    getch();
}
