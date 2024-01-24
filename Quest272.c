#include <stdio.h>
int kesimo(int n, int k){
    if (k == 1) {
        return n % 10; 
    }

    if (n == 0) {
        return 0;
    }

    return kesimo(n / 10, k - 1);
}

int main(){

    int n, k;

    printf("Informe um numero N: ");
    scanf("%d", &n);
    printf("Informe um numero K: ");
    scanf("%d", &k);

    int valKesimo = kesimo(n, k);

    printf("O valor do kesimo eh %d", valKesimo); 

    return 0;
}