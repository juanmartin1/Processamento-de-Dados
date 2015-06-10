#include <stdio.h>
#include <math.h>

void up(int *M, int i, int j){
	M[i*10 + j] = ((2*(i+1)) + (7*(j+1)) + 2);
}

void under(int *M, int i, int j){
	M[i*10 + j] = ((3*pow((i+1), 2)) + 1);
}

void DiagPrincipal(int *M, int i, int j){
	M[i*10 + j] = ((4*pow((i+1), 3)) + (5*pow((j+1), 2)) + 1);
}

void scanmatrix(int *M){
	int i, j;
	for (i=0 ; i<10 ; i++) {
		for (j=0 ; j<10 ; j++) {
			if(i<j) up(M, i ,j);
			else if(i==j) DiagPrincipal(M, i, j);
			else under(M, i, j);
		}
	}
}

void printmatrix(int *M){
	int i, j;
	for (i=0 ; i<10 ; i++) {
		for (j=0 ; j<10 ; j++){
			printf(" %d ", M[i*10 + j]);
		}
		printf("\n");
	}
}

void principal(){
	int M[3][3];
	scanmatrix((int*)M);
	printmatrix((int*)M);
}
