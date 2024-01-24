#include <stdio.h>
#include <conio.h>
#include <string.h>
const int tamanho = 10;

void main(){

    char nome[20];
    char vetGabar[tamanho];
    char vetResp[tamanho];
    int k, j, controle=1;
    int cont = 0;

    printf("O gabarito da prova eh:\n");
    for(k=0; k<tamanho; k++){
        printf("Questao %d\n", k+1);
        scanf("%c", &vetGabar[k]);
        fflush(stdin);
    }

    printf("Informe o nome do usuario: ");
    gets(nome);
    fflush(stdin);

    while(nome != "fim"){
        for(j=0; j<tamanho; j++){
            printf("Questao %d\n", j+1);
            scanf("%c", &vetResp[j]);
            fflush(stdin);
        }

        for(k=0; k<tamanho; k++){
            if(vetGabar[k] == vetResp[k]){
                    cont = cont + 1;
            }
        }
        printf("Acertou %d%% das questoes\n", cont*10);
        printf("Informe o nome do usuario: ");
        gets(nome);
        fflush(stdin);
    }
    getch();
}
