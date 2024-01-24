#include <stdio.h>

void main() {
  int valor1, valor2, valor3, mmc = 1, divisor = 2, contador_div;
  printf("Informe tres valores: ");
  scanf("%d %d %d",&valor1,&valor2,&valor3);
    while(valor1 !=1 || valor2 != 1 || valor3 !=1){
        contador_div = 0;
        if (valor1 % divisor == 0){
            contador_div ++;
            valor1 = valor1/divisor;
        }
        if (valor2 % divisor == 0){
            contador_div ++;
            valor2 = valor2/divisor;
        }
        if (valor3 % divisor == 0){
            contador_div ++;
            valor3 = valor3/divisor;
        }
        if (contador_div >= 1){
            mmc = mmc *divisor;
        }
        else{
            divisor ++;
        }
    }
    printf("MMC = %d",mmc);

    getch();
}
