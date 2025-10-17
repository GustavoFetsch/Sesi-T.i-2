#include <stdio.h>

int main() {
    int num, contador = 0;
    float soma = 0, media;

    while (contador < 10) {
        printf("Digite um numero positivo (%d/10): ", contador + 1);
        scanf("%d", &num);

        if (num > 0) {
            soma += num;
            contador++;
        } else {
            printf("Numero invalido! Digite apenas positivos.\n");
        }
    }

    media = soma / 10;
    printf("A media dos numeros positivos e: %.2f\n", media);

    return 0;
}