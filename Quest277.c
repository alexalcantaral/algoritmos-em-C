#include <stdio.h>

float calcularParcela(float emprestimo, int parcelas, int N) {
    if (N == 1) {
        return emprestimo * 0.2; // Valor da primeira prestação corresponde a 20% do empréstimo
    } else {
        float parcela_anterior = calcularParcela(emprestimo, parcelas, N - 1);
        return parcela_anterior * 1.07; // Valor da parcela N é a parcela anterior acrescida de 7% de juros
    }
}

int main() {
    float valor_emprestimo;
    int num_parcelas, parcela_desejada;

    printf("Digite o valor do emprestimo: ");
    scanf("%f", &valor_emprestimo);

    printf("Digite o numero de parcelas: ");
    scanf("%d", &num_parcelas);

    printf("Digite o numero da parcela desejada (entre 1 e 240): ");
    scanf("%d", &parcela_desejada);

    if (parcela_desejada < 1 || parcela_desejada > 240) {
        printf("Número de parcela invalido. Deve ser entre 1 e 240.\n");
        return 1;
    }

    float valor_parcela = calcularParcela(valor_emprestimo, num_parcelas, parcela_desejada);
    printf("O valor da parcela %d do emprestimo eh: %.2f\n", parcela_desejada, valor_parcela);

    return 0;
}
