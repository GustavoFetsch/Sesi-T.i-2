#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero invalido!\n");
        return 0;
    }

    printf("Numeros impares de %d ate 1:\n", N);

    for (int i = N; i >= 1; i--) {
        if (i % 2 != 0)
            printf("%d ", i);
    }

    printf("\nFIM!\n");

    return 0;
}