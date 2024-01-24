#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){

    char palavra[30];
    printf("Informe a palavra: ");
    gets(palavra);

    char primeira = palavra[0];
    int tamanho = strlen(palavra);
    char ultima = palavra[tamanho-1];

    printf("A primeira letra da palavra eh %c\n", primeira);
    printf("A ultima letra da palavra eh %c", ultima);

    getch();
}
