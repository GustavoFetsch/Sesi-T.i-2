#include <stdio.h>

int maiorValor(int vetor[], int tamanho) {
    int maior = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    return maior;
}

int main() {
    int numeros[5];

    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("O maior valor é: %d", maiorValor(numeros, 5));

    return 0;
}