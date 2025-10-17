#include <stdio.h>

int main()
{
    float kmh;

    printf("Insira a velocidade em km/h: ");
    scanf("%f", &kmh);

    float ms = kmh / 3.6;

    printf("A velocidade convertida para m/s é: %.2f\n", ms);

    return 0;
}