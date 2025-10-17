#include <stdio.h>

int main()
{
    float kg;
    float libras;

    printf("Insira o valor em kg: ");
    scanf("%f", &kg);

    libras = kg * 0.45;

    printf("O valor convertido para libras é: %.2f lb\n", libras);

    return 0;
}
