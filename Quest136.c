#include <stdio.h>
#include <conio.h>

void main() {

  int num, resto, coeciente, contador=1, divisao;

  printf("Informe um numero:");
  scanf("%d",&num);
  divisao = num;
  coeciente = num;

  do{
    divisao=divisao/2;
    contador++;
  }while(divisao>=2);

  int binario[contador];
  contador = 0;

  do{
    resto = coeciente % 2;
    coeciente = coeciente/2;
    binario[contador] = resto;
    contador++;
  }while(coeciente>=2);

  binario[contador] = divisao;

  for(int k=contador;k>=0;k--){
    printf("%d",binario[k]);
  }
    getch();
}
