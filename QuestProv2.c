#include <stdio.h>
void piramide(int num){
    if(num==0){
        return;
    }
    piramide(num-1);
    for(int k=0; k<num; k++){
        printf("*");
    }
    printf("\n");
}

int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    piramide(num);

    return 0;
}