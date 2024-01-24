#include <stdio.h>
#include <conio.h>

void main(){

    int termInicial, n, razao, k, i;
    printf("Informe o termo inicial: ");
    scanf("%d", &termInicial);
    printf("Informe a razao da PA: ");
    scanf("%d", &razao);
    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for(k=termInicial; k<=n; k++){
        for(i=termInicial; i<=n; i++){

        }
        if(k == termInicial){
            printf("%d ", termInicial);
        }
        termInicial = termInicial + razao;
        printf("%d ", termInicial);

    }



    getch();
}
