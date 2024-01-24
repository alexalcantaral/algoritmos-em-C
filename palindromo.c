#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

void main(){

    char vet[tamanho];
    int i, cont=0;
    for(i=0; i<tamanho; i++){
        printf("Informe um numero: ");
        scanf("%c", &vet[i]);
        fflush(stdin);
    }
    for(i=0; i<tamanho/2; i++){
        if(vet[i]==vet[tamanho-1-i]){
            cont = cont + 1;
        }
    }
    if(cont==(tamanho/2)){
        printf("O vetor eh um palindromo!");
    }
    else{
        printf("O vetor nao eh um palindromo!");
    }

    getch();
}
