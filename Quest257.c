#include <stdio.h>
int potencia(int base, int expoente){
    if(expoente==0){
        return 1;
    }
    return base * potencia(base, expoente-1);
}

int main(){

    int base, expoente;

    printf("Informe o valor da base: ");
    scanf("%d", &base);
    printf("Informe o valor do expoente: ");
    scanf("%d", &expoente);

    if(base!=0 && expoente!=0){
        potencia(base, expoente);
        int valPotencia = potencia(base, expoente);
        printf("O resultado eh %d", valPotencia);
    }
    else{
        printf("Base e expoente igual a zero! Nao deve ser calculado!");
    }

    return 0;
}