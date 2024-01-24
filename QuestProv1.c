#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void troca(char texto[], int tamanho, char c1, char c2){
    for(int k=0; k<tamanho; k++){
        if(texto[k]==c1){
            texto[k]=c2;
        }
    }
}
int main(){

    char texto[10], c1, c2;
    int tamanho;

    printf("Informe um texto: ");
    gets(texto);
    fflush(stdin);
    tamanho = strlen(texto);
    printf("Informe uma letra: ");
    scanf("%c", &c1);
    fflush(stdin);
    printf("Informe a letra para a troca: ");
    scanf("%c", &c2);
    fflush(stdin);

    printf("O texto antes da troca eh %s\n", texto);

    troca(texto, tamanho, c1, c2);

    printf("O texto depois da troca eh %s\n", texto);

    return 0;
}