#include <stdio.h>
#include <conio.h>

void main(){

    int soma=0, n, v;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    while(n > soma){
        printf("Informe valores: ");
        scanf("%d", &v);

        soma = soma + v;
    }

    printf("A soma dos numeros para que seja possivel ultrapassar o valor de N eh %d", soma);

    getch();
}
