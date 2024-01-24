#include <stdio.h>
#include <conio.h>

void main(){

    int k, termInicial, razao, n;

    printf("Informe o termo inicial da PA: ");
    scanf("%d", &termInicial);
    printf("Informe a razao da PA: ");
    scanf("%d", &razao);
    printf("Informe o numero N: ");
    scanf("%d", &n);

    for(k=termInicial; k<=n; k++){
        if(k==termInicial){
            printf("%d ", termInicial);
        }
        termInicial = termInicial + razao;
        printf("%d ", termInicial);
    }

    getch();
}
