#include <stdio.h>
const int tamanho = 10;
int quantPares(int vet[tamanho], int n){
    if(n==tamanho){
        if(vet[n-1]%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(vet[n]%2==0){
        return 1;
    }
    return quantPares(vet, n+1);
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

    int resultado = quantPares(vet, n);

    printf("A quantidade de numeros pares a partir do numero N eh %d", resultado);

    return 0;
}