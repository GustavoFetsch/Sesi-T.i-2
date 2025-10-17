#include <stdio.h>

void exibirDataPorExtenso(int dia, int mes, int ano) {
    char *meses[12] = { "janeiro", "fevereiro", "março", "abril", "maio", "junho",
                     "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    printf("%d de %s de %d\n", dia, meses[mes], ano);
}

int main() {
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês (número): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    exibirDataPorExtenso(dia, mes-1, ano);

    return 0;
}