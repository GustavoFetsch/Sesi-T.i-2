#include  <stdio.h>


void main() {
	int vetor[3];

    for(int i=0; i <3; i++){

    printf(" Digite o valor de %d\n", i);
    scanf("%d", &vetor [i]);
    }
    	printf("digite o valor de 1:");
    	scanf("%d\n", &vetor [0]);
    	printf("digite o valor de 2:");
    	scanf("%d\n", &vetor [1]);
    	printf("digite o valor de 3:");
    	scanf("%d\n", &vetor [2]);

	vetor[0] =1;
	vetor[1] =2;
	vetor[2] =3;


    	printf ("%d\n", vetor [0]);
    	printf ("%d\n", vetor [1]);
    	printf ("%d\n", vetor [2]);
    	
    	printf("exibe o valores:");

	for ( int i=0; i <= 2; i++) {
		printf(" O valor de %d = %d\n", i+1 , vetor[i] );
	}

}