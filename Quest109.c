#include <stdio.h>
#include <conio.h>

void main(){

    int m, n, x, k;

    printf("Informe o valor de M: ");
    scanf("%d", &m);
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    printf("Informe o valor de X: ");
    scanf("%d", &x);

    if(m < n){
        for(k=m; k<=n; k++){
            if(x % k == 0){
                printf("O valor %d eh um divisor exato\n", k);
        }
    }
    }
    else if(m > n){
        for(k=n; k<=m; k++){
            if(x % k == 0){
                printf("O valor %d eh um divisor exato\n", k);
        }
    }
    }
    else{
        printf("Os dois numeros de M e N nao podem ser iguais!\n");
    }

    getch();
}
