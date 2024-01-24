#include <stdio.h>
int somaAlg(int num){
    if(num>=0 && num<=9){
        return num;
    }
    return somaAlg(num/10) + num%10;
}

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    int resultado = somaAlg(num);

    printf("A soma dos algarismos eh %d", resultado);

    return 0;
}