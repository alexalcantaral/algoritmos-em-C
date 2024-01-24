#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){

    int quantidade, sn;
    float preco, valorTotal=0;
    char nome[20];

    do{
        fflush(stdin);
        printf("Informe o nome do item: ");
        gets(nome);
        printf("Informe o preco do item: ");
        scanf("%f", &preco);
        printf("Informe a quantidade desse item: ");
        scanf("%d", &quantidade);

        valorTotal = valorTotal + (preco * quantidade);

        printf("Deseja adicionar um novo item?");
        scanf("%d", &sn);

    }while(sn != 0);

    printf("O valor total das compras foi %.2f\n", valorTotal);

    float valorAvista = valorTotal - (valorTotal * 0.15);

    printf("O valor a vista eh de %.2f", valorAvista);

    getch();
}
