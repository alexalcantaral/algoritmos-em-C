#include <stdio.h>

#define MAX_PRIMES 100 // Tamanho máximo para a lista de números primos

// Função para encontrar números primos até um valor máximo
void findPrimes(int max, int primes[], int *numPrimes) {
    int isPrime;
    *numPrimes = 0;

    for (int num = 2; num <= max; num++) {
        isPrime = 1;
        for (int i = 0; i < *numPrimes; i++) {
            if (num % primes[i] == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            primes[*numPrimes] = num;
            (*numPrimes)++;
        }
    }
}

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O número deve ser positivo.\n");
        return 1;
    }

    int primes[MAX_PRIMES];
    int numPrimes;
    findPrimes(num, primes, &numPrimes);

    printf("Decomposição em fatores primos de %d: ", num);

    for (int i = 0; i < numPrimes; i++) {
        while (num % primes[i] == 0) {
            printf("%d", primes[i]);
            num /= primes[i];
            if (num > 1) {
                printf(" x ");
            }
        }
    }

    printf("\n");

    return 0;
}
