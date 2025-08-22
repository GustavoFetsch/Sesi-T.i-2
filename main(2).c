#include <stdio.h>

#define TAMANHO 5

int main() {
    int vetor[TAMANHO];

    
    printf("Digite %d números inteiros:\n", TAMANHO);
    for (int a = 0; a < TAMANHO; a++) {
        printf("Número %d: ", a + 1);
        scanf("%d", &vetor[a]);
    }
    
    for (int a = 0; a <= TAMANHO; a++) {
        for (int b = 0; b <= TAMANHO - a; b++) {
            if (vetor[b] > vetor[b + 1]) {
                int temp = vetor[b];
                vetor[b] = vetor[b + 1];
                vetor[b + 1] = temp;
            }
        }
    }
    printf("\nNúmeros em ordem crescente:\n");
    
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\n", vetor[i]);
    }
    
    printf("\n");
    
    return 0;
}