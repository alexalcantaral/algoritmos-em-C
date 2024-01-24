#include <stdio.h>
#include <conio.h>
const int caracteres = 20;

void main(){

    int vet[caracteres];
    int k, j, cont=0;

    printf("Informe um  numero de 20 caracteres: ");
    scanf("%d", vet[caracteres]);

    for(k=0; k<caracteres-10; k++){
        for(j=caracteres-1; j>=10; j--){
            if(vet[k] == vet [j]){
                cont = cont + 1;
            }
        }
    }

    if(cont == 10){
        printf("Eh um palindromo!");
    }
    else{
        printf("Nao eh um palindromo!");
    }

    getch();
}
