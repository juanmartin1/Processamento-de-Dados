#include <stdio.h>
#include <stdlib.h>

void lervec(float* V){
	int i;
	printf("Digite os 5 numeros do vetor.\n");
	for (i=0 ; i<5 ; i++){
		scanf("%f", &V[i]);
	}
}

void direct(float *V){
	int i;
	for (i=0 ; i<5 ; i++) printf("%.2f ", V[i]);
	exit(0);
}

void invers(float *V){
	int i;
	for (i=4 ; i>=0 ; i--) printf("%.2f ", V[i]);
	exit(0);
}

void principal(){
	float V[5];
	int c;
	lervec(V);
	printf("Digite a condicao.\n");
	scanf("%d", &c);
	
	if (c==1) direct(V);
	else if (c==2) invers(V);
	else if (c != 0) printf("Codigo Invalido.");
	else exit(1);
}
