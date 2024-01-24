#include <stdio.h>
#include <conio.h>

const float taxaJuros = 0.07;

void main(){

    int k;
    float valorFinanc, qntPrestacoes, valorTotal, valorParc;

    printf("Informe o valor que o cliente quer financiar: ");
    scanf("%f", &valorFinanc);
    printf("Informe a quantidade de prestacoes na qual ele quer dividir: ");
    scanf("%f", &qntPrestacoes);

    valorParc = valorFinanc / qntPrestacoes;
    printf("A 1 prestacao eh %.2f\n", valorParc);
    valorTotal = valorParc;

    for(k=2; k<=qntPrestacoes; k++){
        valorParc = valorParc * (1+taxaJuros);
        valorTotal = valorTotal + valorParc;
        printf("A %d prestacao eh %.2f\n", k, valorParc);
    }

    float diferenca = valorTotal - valorFinanc;

    printf("O valor total ficou de %.2f\n", valorTotal);
    printf("A diferenca eh de %.2f\n", diferenca);

    getch();
}
