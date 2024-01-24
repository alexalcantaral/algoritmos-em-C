#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

void main(){

    int vet[tamanho];
    int k, n;

    for(k=0; k<tamanho; k++){
        printf("Informe um numero: ");
        scanf("%d", &vet[k]);
    }
    printf("Informe um numero para N: ");
    scanf("%d", &n);
    for(k=0; k<tamanho; k++){
        if(vet[k] > n){
            printf("%d  ", vet[k]);
        }
    }

    getch();
}
