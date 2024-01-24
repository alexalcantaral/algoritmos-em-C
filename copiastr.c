#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){

    char palavra1[20];
    char palavra2[20];

    printf("Informe uma palavra: ");
    gets(palavra1);

    strcpy(palavra2, palavra1);

    printf("A palavra digitada foi: %s", palavra2);

    getch();
}
