#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    srand(time(NULL));

    int numeroAleatorio = (rand() % 100) + 1;

    int limiteInferior = 1;
    int limiteSuperior = 100;
    int tentativa;

    printf("Bem-vindo ao jogo do Arrochado!\n");
    printf("Tente imprensar o numero entre 1 e 100.\n");

    while (1) {
        printf("Digite um numero entre %d e %d para imprensar o numero gerado: ", limiteInferior, limiteSuperior);
        scanf("%d", &tentativa);

        if (tentativa < limiteInferior || tentativa > limiteSuperior) {
            printf("Numero fora dos limites permitidos. Tente novamente.\n");
        } else if (tentativa == numeroAleatorio) {
            printf("Parabens! Voce conseguiu imprensar o numero %d e venceu o jogo!\n", numeroAleatorio);
            break;
        } else if (tentativa < numeroAleatorio) {
            limiteInferior = tentativa + 1;
        } else {
            limiteSuperior = tentativa - 1;
        }

        if (limiteInferior == limiteSuperior) {
            printf("Voce perdeu! O numero a ser imprensado era %d.\n", numeroAleatorio);
            break;
        }
    }

    getch();
}
