#include <stdio.h>
#include <conio.h>

void main(){

    int k, n, fatorial=1;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for(k=n; k>=1; k--){
        fatorial = fatorial * k;
    }

    printf("O fatorial desse numero eh %d", fatorial);

    getch();
}
