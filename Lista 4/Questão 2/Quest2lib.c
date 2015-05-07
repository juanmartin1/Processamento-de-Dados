#include <stdio.h>

void imprime(int *V, int n){
	int i;
	for(i=0 ; i<n ; i++){
		printf(" %d", V[i]);
	}
}

void principal(){
	int V[10], i;
	printf("Digite os 10 numeros");
	for (i=0 ; i<10 ; i++){
		scanf("%d", &V[i]);
		if(V[i] < 0) V[i] = 0;
	}
	imprime(V, 10);
}
