#include <stdio.h>
#include <stdlib.h>

void imprime(int M[][4], int I, int J){
	int i, j;
	for(i=0 ; i<I ; i++){
		for(j=0 ; j<J ; j++){
			printf(" %d\t", M[i][j]);
		}
		printf("\n");
	}
}

void principal(){
	int M[4][4], T[4][4], i = 0, j = 0, cont = 0;
	for(i=0; i<4 ; i++){
		for(j=0 ; j<4 ; j++){
			M[i][j] = 1 + ( rand() % 20 );
			if(i >= j )	T[i][j] = M[i][j];
			else T[i][j] = 0;
		}
	}
	printf("\nMatriz inicial:\n");
	imprime(M, 4, 4);
	printf("\nTrinagular inferior:\n");
	imprime(T, 4, 4);
}
	 
