#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){

    char str1[20] = "Bom dia, ";
    char str2[20] = "pessoal";

    strcat(str1, str2);
    printf("O valor da string1 eh %s", str1);

    getch();
}
