#include <stdio.h>

int main() {
    int idade, faixa;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
        faixa = 1;
    else if (idade >= 8 && idade <= 10)
        faixa = 2;
    else if (idade >= 11 && idade <= 13)
        faixa = 3;
    else if (idade >= 14 && idade <= 17)
        faixa = 4;
    else if (idade >= 18)
        faixa = 5;
    else
        faixa = 0;

    switch (faixa) {
        case 1:
            printf("Categoria: Infantil A\n");
            break;
        case 2:
            printf("Categoria: Infantil B\n");
            break;
        case 3:
            printf("Categoria: Juvenil A\n");
            break;
        case 4:
            printf("Categoria: Juvenil B\n");
            break;
        case 5:
            printf("Categoria: Sênior\n");
            break;
        default:
            printf("Sem categoria (idade abaixo de 5 anos)\n");
    }

    return 0;
}