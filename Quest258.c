#include <stdio.h>
void binario(int num){
    if(num==0){
        printf("%d ", num);
    }
    else if(num==1){
        printf("%d ", num);
    }
    else if(num>1){
    int resto = num%2;
    binario(num/2);
    printf("%d ", resto);
    }
}

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    binario(num);

    return 0;
}