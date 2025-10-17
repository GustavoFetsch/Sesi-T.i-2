#include <stdio.h>

void desenhaLinha(int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("=");
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite quantos sinais de igual deseja desenhar: ");
    scanf("%d", &n);

    desenhalinha(n);

    return 0;
}
