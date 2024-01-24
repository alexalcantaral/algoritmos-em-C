#include <stdio.h>
#include <conio.h>

const int eleitores = 20;

void main(){

    int k, votos, contJB=0, contZC=0, contMB=0, contA=0, nulos=0;

    for(k=1; k<=eleitores; k++){
        printf("Informe o voto: ");
        scanf("%d", &votos);

        switch(votos){
        case 1: contJB = contJB + 1;break;
        case 2: contZC = contZC + 1;break;
        case 3: contMB = contMB + 1;break;
        case 4: contA = contA + 1;break;
        default: nulos = nulos + 1;break;
        }
    }

    printf("A quantidade de votos de Joao Borracheiro foi %d\n", contJB);
    printf("A quantidade de votos de Ze do Caminhao foi %d\n", contZC);
    printf("A quantidade de votos de Maria da Bodega foi %d\n", contMB);
    printf("A quantidade de votos de Ana foi %d\n", contA);
    printf("A quantidade de votos nulos foi %d\n", nulos);

    getch();
}
