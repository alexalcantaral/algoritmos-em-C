#include <stdio.h>
const int tamanho = 10;
int contVet(int vet[tamanho], int n, int x){
    if(n==tamanho){
        return 0;
    }
    if(x==vet[n]){
        return 1 + contVet(vet, n, x);
    }
    else{
        return contVet(vet, n+1, x);
    }
}
int main(){

    int vet[tamanho];
    int n, k, x;

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
    printf("Informe um numero X: ");
    scanf("%d", &x);

    int resultado = contVet(vet, n, x);

    printf("A quantidade de numeros X partir do numero N eh %d", resultado);

    return 0;
}