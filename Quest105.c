#include <stdio.h>
#include <conio.h>

void main(){

    int M, N, soma=0;

    printf("Digite o valor de M: ");
    scanf("%d", &M);
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if(M <= N){
        for(int k=M; k<=N; k++){
            soma = soma + k;
        }
    }
    else{
        for(int k=N; k<=M; k++){
            soma = soma + k;
        }
    }

    printf("A soma de todos os numeros no intervalo [%d, %d] eh: %d\n", M, N, soma);

    getch();
}
