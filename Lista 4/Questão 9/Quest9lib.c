#include <stdio.h>
#include <stdlib.h>

void encontra(int M[][5], int X, int I, int J){
	int e = 0, V[I*J], i , j;
	for(i=0; i<I ; i++){
		for(j=0 ; j<J ; j++){
			if(M[i][j] == X){
				V[e] = i;
				V[e+1] = j; 
				e += 2;
			}
		}
	}
	if (e>0){
		printf("As posições onde o numero %d foi encontrado sao: \n", X);
		for(i=0; i<e ; (i += 2)){
			printf("M[%d][%d]\n", V[i], V[i+1]);
		}
	}
	else printf("Não encontrado.");	
}

void principal(){
	int M[5][5], X, V[25], i = 0, j = 0, e = 0;
	for(i=0; i<5 ; i++){
		for(j=0 ; j<5 ; j++){
			scanf("%d", &M[i][j]);
		}
	}
	printf("\nDigite o numero a ser encontrado\n");
	scanf("%d", &X);
	encontra(M, X, 5, 5);

}	 
