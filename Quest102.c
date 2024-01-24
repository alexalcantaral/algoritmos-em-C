#include <stdio.h>
#include <conio.h>

void main(){

    int k, n;
    printf("Informe um numero N: ");
    scanf("%d", &n);

    for(k=1; k<=n; k++){
        if(n % k == 0){
            printf("%d\n", k);
        }
    }

    getch();
}
