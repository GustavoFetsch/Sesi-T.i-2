#include <stdio.h>

int main() {
    int num, contador = 0;

    while (contador < 10) {
        printf("Digite um numero positivo (%d/10): ", contador + 1);
        scanf("%d", &num);

        if (num > 0) {
            int divisores = 0;
            for (int i = 1; i <= num; i++) {
                if (num % i == 0)
                    divisores++;
            }

            if (divisores == 2)
                printf("%d e primo.\n", num);
            else
                printf("%d nao e primo.\n", num);

            contador++;
        } else {
            printf("Numero invalido! Digite apenas positivos.\n");
        }
    }

    return 0;
}