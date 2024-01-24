#include <stdio.h>
void hexadecimal(int num){
    if(num==0){
        printf("%d ", num);
    }
    else if(num==1){
        printf("%d ", num);
    }
    else if(num>1){
        int resto = num%16;
        hexadecimal(num/16);
        switch (resto){
            case 10: printf("A ");break;
            case 11: printf("B ");break;
            case 12: printf("C ");break;
            case 13: printf("D ");break;
            case 14: printf("E ");break;
            case 15: printf("F ");break;
            default: printf("%d ", resto);
        }
    }
}

int main(){

    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    hexadecimal(num);

    return 0;
}