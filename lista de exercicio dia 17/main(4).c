#include <stdio.h>

int main(){
    
    int num;
    
    printf("Digite um numero:");
        scanf("%d" , &num);
    
    printf("o antecessor de %d e %d\n" ,num, num -1);
    printf("o sucessor de %d e %d\n" ,num, num +1);
}
