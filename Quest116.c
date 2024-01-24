#include <stdio.h>
#include <conio.h>
#include <string.h>

const int pessoas = 5;

void main(){

    int idade, k, cont=0;
    char sexo;
    char nome[20];

    for(k=1; k<=pessoas; k++){
        fflush(stdin);
        printf("\nInforme o nome da pessoa: ");
        gets(nome);
        printf("Informe o sexo da pessoa: ");
        scanf("%c", &sexo);
        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);

        if(sexo == 'f' && idade >= 18 && idade <= 21){
            cont++;
        }
    }

    char percentual = ((float)cont / pessoas) * 100;
    printf("\nA quantidade de pessoas mulheres entre 18 e 21 eh %d e o percentual eh %d", cont, percentual);

    getch();
}
