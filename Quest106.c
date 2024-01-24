#include <stdio.h>
#include <conio.h>

void main(){

    int M, N, soma=0, media;

    printf("Informe o valor de M: ");
    scanf("%d", &M);
    printf("Informe o valor de N: ");
    scanf("%d", &N);

    if(M <= N){
        for(int k=M; k<=N; k++){
            soma = soma + k;
            media = (float)soma / N;
        }
        printf("\nO valor da soma dos intervalos eh %d e a media aritmetica eh %d", soma, media);
    }
    else{
        for(int k=N; k<=M; k++){
            soma = soma + k;
            media = (float)soma / M;
        }
        printf("\nO valor da soma dos intervalos eh %d e a media aritmetica eh %d", soma, media);
    }

    getch();
}
