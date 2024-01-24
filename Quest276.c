#include <stdio.h>
void piramide(int n){
    if(n==0){
        return;
    }
    for(int k=0; k<n; k++){
        printf("*");
    }
    printf("\n");
    piramide(n-1);
}


int main(){

    int n;

    printf("Informe um numero nao negativo N: ");
    scanf("%d", &n);

    piramide(n);

    return 0;
}