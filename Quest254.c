#include <stdio.h>

int produto(int x, int y) {
    if (x == 0 || y == 0) {
        return 0;
    }
    if (y == 1) {
        return x;
    }
    return x + produto(x, y - 1);
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    int resultado = produto(num1, num2);
    printf("O produto de %d por %d e: %d\n", num1, num2, resultado);

    return 0;
}
