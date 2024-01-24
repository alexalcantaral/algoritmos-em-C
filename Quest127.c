#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){

    char palavra[20];
    int qntPalavras = 0;

    do{
        fflush(stdin);
        printf("Informe a palavra: ");
        gets(palavra);
        int tamanho = strlen(palavra);
        if(tamanho == 5){
            qntPalavras = qntPalavras + 1;
            printf("A palavra %s tem 5 letras!\n", palavra);
        }
    }while(qntPalavras < 2);

    getch();
}
