#include <stdio.h>

int main(){
    int num;
    
    printf("digite um numero de 1 a 12:");
        scanf("%d" ,&num);
        
    switch(num){
        case 1:
            printf("janeiro");
    break;
    
        case 2:
            printf("Fevereiro");
    break;
        
        case 3:
            printf("marco");
    break;
        
        case 4:
            printf("abril");
    break;
    
        case 5:
            printf("maio");
    break;
    
        case 6:
            printf("junho");
    break;
    
        case 7:
            printf("julho");
    break;
    
        case 8:
            printf("agosto");
    break;
    
        case 9:
            printf("setembro");
    break;
    
        case 10:
            printf("outubro");
    break;
    
        case 11:
            printf("novembro");
    break;
    
        case 12:
            printf("dezembro");
    break;
    
    default:
    printf("opcao invalida!\n");
    break;
    }
}