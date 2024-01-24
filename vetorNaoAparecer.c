#include <stdio.h>
#include <conio.h>
const int tamanho=5;

void main() {

  int vet1[tamanho], vet2[tamanho];
  int i, j, cont;

  printf("Vetor 1:");
  for(i=0; i<tamanho; i++){
    scanf("%d", &vet1[i]);
  }
  printf("Vetor 2:");
  for(j=0; j<tamanho; j++){
    scanf("%d", &vet2[j]);
  }

  for(i=0; i<tamanho; i++){
    cont = 0;
    for(j=0; j<tamanho; j++){
        if(vet1[i]==vet2[j]){
            cont = cont + 1;
        }
    }
    if(cont==0){
        printf("\n%d", vet1[i]);
    }
  }
  getch();
}
