#include <stdio.h>
#include <stdlib.h>

float soma_j_under_i(float *M, int n){
	int i, j;
	float S;
	for (i=0 ; i<n ; i++) {
		j = 0;
		while(i > j){
			S += M[i*n + j];
			j++;
		}
	}
	printf("\nA soma dos elementos abaixo da diagonal principal e: %.2f", S);
	return S;
}

void geramatrix(float *M, int n){
	int i, j;
	for (i=0 ; i<n ; i++) {
		for (j=0 ; j<n ; j++){
			(M[i*n + j]) = rand()/100.0;
		}
	}
}

void imprimematrix(float *M, int n){
	int i, j;
	printf("\nA matriz gerada foi:\n");
	for (i=0 ; i<n ; i++) {
		for (j=0 ; j<n ; j++){
			printf("%.2f ", M[i*n + j]);
		}
		printf("\n");
	}
}

void principal(){
	int n;
	printf("Digite a ordem da matriz.\n");
	scanf("%d", &n);
	float M[n][n];
	geramatrix((float*)M, n);
	imprimematrix((float*)M, n);
	soma_j_under_i((float*)M, n);
}
