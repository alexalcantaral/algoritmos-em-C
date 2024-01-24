#include <stdio.h>
int somaAlg(int num){
    if(num>=0 && num<=9){
        return num;
    }
    int valor = num%10;
    return somaAlg(num/10) + valor;
}

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    int soma = somaAlg(num);
    printf("A soma dos algarismos eh %d", soma);

    return 0;
}