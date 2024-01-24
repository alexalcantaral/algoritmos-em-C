#include <stdio.h>
#include <conio.h>

void main(){

    int num, contImp=0, contPar=0, somaImp=0, somaPar=0;
    float mediaImp=0, mediaPar=0;

    do{
        printf("Informe um numero inteiro: ");
        scanf("%d", &num);

        if(num % 2 == 0 && num != 0){
            contPar = contPar + 1;
            somaPar = somaPar + num;
        }
        else if(num % 2 != 0 && num != 0){
            contImp = contImp + 1;
            somaImp = somaImp + num;
        }

    mediaPar = somaPar / contPar;
    mediaImp = somaImp / contImp;

    }while(num != 0);

    printf("A media dos pares foi de %.0f\n", mediaPar);
    printf("A media dos impares foi de %.0f\n", mediaImp);

    getch();
}
