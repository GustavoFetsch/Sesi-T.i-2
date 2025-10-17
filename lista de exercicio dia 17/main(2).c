#include <stdio.h>
#define PI 3.14

int main()
{
    float radianos;

    printf("Insira o valor em radianos: ");
    scanf("%f", &radianos);

    float graus = radianos * (180.0 / PI);

    printf("O valor convertido para graus é: %.2f\n", graus);

    return 0;
}
