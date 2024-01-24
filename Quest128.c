#include <stdio.h>
#include <conio.h>
#include <string.h>

const int qntBois = 20;

void main(){

    int k;
    char nome[20];
    float peso;
    char nomeLeve[50];
    char nomePesado[50];

    for(k=1; k<=qntBois; k++){

        printf("Informe o nome do boi: ");
        gets(nome);
        fflush(stdin);
        printf("Informe o peso do boi: ");
        scanf("%f", &peso);

        float pesado = peso;
        float leve = peso;

        if(peso < leve){
            leve = peso;
            strcpy(nomeLeve, nome);
        }
        else if(peso > pesado){
            pesado = peso;
            strcpy(nomePesado, nome);
        }
        }

        printf("\nO peso do Boi mais pesado chamado %s eh %.2f\n", nomePesado, pesado);
        printf("O peso do Boi mais leve chamado %s eh %.2f\n", nomeLeve, leve);

    getch();
}
