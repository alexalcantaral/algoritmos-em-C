#include <stdio.h>
#include <conio.h>
#include <math.h>

const int pessoas = 20;
const float acimaPeso = 25;
const float abaixoPeso = 18.5;

void main(){

    int k;
    float altura, peso, acima=0, abaixo=0, ideal=0;

    for(k=1; k<=pessoas; k++){
        printf("Informe o peso e a altura da pessoa: ");
        scanf("%f%f", &peso, &altura);

        float imc = peso / (pow(altura,2));

        if(imc>=acimaPeso){
            acima = acima + 1;
        }
        else if(imc<=abaixoPeso){
            abaixo = abaixo + 1;
        }
        else{
            ideal = ideal + 1;
        }
    }

    printf("A quantidade de pessoas acima do peso foi %.0f\n", acima);
    printf("A quantidade de pessoas abaixo do peso foi %.0f\n", abaixo);
    printf("A quantidade de pessoas no peso ideal foi %.0f\n", ideal);

    getch();
}
