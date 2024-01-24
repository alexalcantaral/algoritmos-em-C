#include <stdio.h>
#include <conio.h>

void main(){

    int k, n, cont=0;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for(k=2; k<=n; k++){
        if(n % k == 0){
            cont++;
        }
    }
    if(cont == 1){
        printf("O numero eh primo!");
    }
    else{
        printf("O numero nao eh primo!");
    }

    getch();
}
