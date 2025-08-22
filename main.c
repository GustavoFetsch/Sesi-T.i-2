#include <stdio.h>

void main () {
    int numeros[5];
    
    for(int i =0;  i < 5; i++){
        printf("digite o valor de %d: ", i );
        scanf("%d",  & numeros[i]);
    }
    
    printf("exibindo valores d forma crescente: \n");
    
    for (int i=0; i  < 5; i++){
        printf("%d\n", numeros[i]);
    }
    
    printf("\n exibindovalores de forma decrescente\n");
    
    for (int i=4; i >=0 ; i--){
        printf("%d\n", numeros[i]);
    }
    
}