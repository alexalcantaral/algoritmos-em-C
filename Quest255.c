#include <stdio.h>
int enesimoTermo(int termInicial, int razao, int n) {
    if (n == 1) {
        return termInicial;
    }
    return enesimoTermo(termInicial + razao, razao, n - 1);
}

int main(){

    int termInicial, razao, n;

    printf("Informe o termino inicial da progressao: ");
    scanf("%d", &termInicial);
    printf("Informe a razao da progressao: ");
    scanf("%d", &razao);
    printf("Informe o numero N: ");
    scanf("%d", &n);

    int valEnesimo = enesimoTermo(termInicial, razao, n);
    printf("O enesimo termo da progressao eh: %d", valEnesimo);

    return 0;
}