#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

void main(){

    int vet[tamanho];
    int k, soma=0;
    float media;

    for(k=0; k<tamanho; k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
        soma = soma + vet[k];
    }
    media = soma / tamanho;
    printf("A media aritmetica eh %.1f\n", media);
    printf("Os numeros acima da media sao:\n");
    for(k=0; k<tamanho; k++){
        if(media < vet[k]){
            printf("%d  ", vet[k]);
        }
    }

    getch();
}
