#include <stdio.h>
#include <conio.h>

const int candidatos = 20;

void main(){

    int k, voto, eleitosPT=0, eleitosPTB=0, eleitosPMDB=0, eleitosDEM=0, eleitosPSDB=0, eleitosPCdoB=0;

    for(k=1; k<=candidatos; k++){
        printf("Informe o numero do cadidato a deputado estadual: ");
        scanf("%d", &voto);
        int partido = voto / 1000;
            switch(partido){
            case 13: eleitosPT = eleitosPT + 1;break;
            case 14: eleitosPTB = eleitosPTB + 1;break;
            case 15: eleitosPMDB = eleitosPMDB + 1;break;
            case 25: eleitosDEM = eleitosDEM + 1;break;
            case 45: eleitosPSDB = eleitosPSDB + 1;break;
            case 65: eleitosPCdoB = eleitosPCdoB + 1;break;
            }
    }

    printf("O PT elegeu %d\n", eleitosPT);
    printf("O PTB elegeu %d\n", eleitosPTB);
    printf("O PMDB elegeu %d\n", eleitosPMDB);
    printf("O DEM elegeu %d\n", eleitosDEM);
    printf("O PSDB elegeu %d\n", eleitosPSDB);
    printf("O PCdoB elegeu %d\n", eleitosPCdoB);

    getch();
}
