#include <stdio.h>

int main() {
    float precoantigo, preconovo;
    int faixa;

    printf("Digite o preco antigo: R$ ");
    scanf("%f", &precoantigo);

    if (precoantigo <= 50)
        faixa = 1;
    else if (precoantigo <= 100)
        faixa = 2;
    else
        faixa = 3;
    switch (faixa) {
        case 1:
            preconovo = precoantigo + (precoantigo * 0.05);
            break;
        case 2:
            preconovo = precoantigo + (precoantigo * 0.10);
            break;
        case 3:
            preconovo = precoantigo + (precoantigo * 0.15);
            break;
        default:
            preconovo = precoantigo;
    }

    printf("Preco novo: R$ %.2f\n", preconovo);

    if (preconovo <= 80)
        printf("Produto barato.\n");
    else if (preconovo <= 120)
        printf("Produto normal.\n");
    else
        printf("Produto caro.\n");

    return 0;
}