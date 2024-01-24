#include <stdio.h>
int quantAlg(int num){
    if(num>=0 && num<=9){
        return 1;
    }
    return quantAlg(num/10) + 1;
}

int main(){

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    int quantidade = quantAlg(num);
    printf("O numero %d tem %d algarismos", num, quantidade);

    return 0;
}