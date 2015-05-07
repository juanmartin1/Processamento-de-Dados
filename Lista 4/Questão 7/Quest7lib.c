#include <stdio.h>

void principal(){
	int I, J;
	printf("Quantas linhas a matriz deve ter?");
	scanf("%d", &I);
	printf("Quantas colunas a matriz deve ter?");
	scanf("%d", &J);
	int M[I][J], i = 0, j = 0, cont = 0;
	for(i=0; i<I ; i++){
		for(j=0 ; j<J ; j++){
			M[i][j] = i*j;
		}
	}
	for(i=0; i<I ; i++){
		for(j=0 ; j<J ; j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
}
	 
