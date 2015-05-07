#include <stdio.h>

void imprime(int *V, int n){
	int i;
	for(i=0 ; i<n ; i++){
		if (i%10 == 0)printf("\n");
		printf(" %d", V[i]);
	}
}

void principal(){
	int N[100], I[100], n, j, i;
	printf("digite quantos numeros você deseja digitar.");
	scanf("%d", &n);
	for(i=0 ; i<n ; i++){
		scanf("%d", &N[i]);
		if ((N[i] % 2 != 0) || (N[i] == 1)) {
			I[j] = N[i];
			j++;
		}
	}
	printf("Numeros alocados:\n");
	imprime(N, n);
	printf("\n\nNumeros impares:\n");
	imprime(I, j);
}
