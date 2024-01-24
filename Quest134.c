#include <stdio.h>
#include <conio.h>

void main(){

    int n, k;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    while(n != 0){
        for(k=1; k<=n; k++){
        printf("*");
    }
    n = n - 1;
    printf("\n");
    }

    getch();
}
