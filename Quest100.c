#include <stdio.h>
#include <conio.h>

void main(){

    int n, k;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    for(k=1; k<=n; k++){
        if(k % 2 == 0){
            printf("%d ", k);
        }
    }

    getch();
}
