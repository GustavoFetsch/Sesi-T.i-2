#include <stdio.h>
int main()
{
    float graus;
    
    printf(" insira graus: ");
    scanf("%f", &graus);
    
    float fahrenheit = (graus* 9.0/5.0) + 32;
    
    printf(" Seu resultado em fahrenheit é: %f", fahrenheit);
    
}