#include <stdio.h>
const int TAMANHO=5;

int main() {
  int vet[TAMANHO], i;

  printf("Informe os valores dos vetores:");
  for(i=0; i<TAMANHO;i++){
    scanf("%d", &vet[i]);
  }

  for(i=0; i<TAMANHO;i++){
    printf("%d ", vet[i]);
  }

  return 0;
}
