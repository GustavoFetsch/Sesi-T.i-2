#include <stdio.h>

int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    printf("O maior é: %d", maior(x, y));

    return 0;
}