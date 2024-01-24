#include <stdio.h>
const int tamanho = 10;
int somaVet(int vet[tamanho], int n){
    if(n==tamanho){
        return vet[n-1];
    }
    return somaVet(vet, n+1) + vet[n-1];
}
int main(){

    int vet[tamanho];
    int n, k;

    printf("Informe o vetor: ");
    for(k=0; k<tamanho; k++){
        scanf("%d", &vet[k]);
    }
    printf("Vetor: ");
    for(k=0; k<tamanho; k++){
        printf("%d ", vet[k]);
    }

    printf("\nInforme um numero N:");
    scanf("%d", &n);

    int resultado = somaVet(vet, n);

    printf("O resultado da soma a partir do numero N eh %d", resultado);

    return 0;
}