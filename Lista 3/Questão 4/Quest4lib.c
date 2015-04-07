#include<stdio.h>

void imprime(int* M, int n){
	int i = 0;
	for (i=0 ; i < n ; i++){
		if(i < n-1 )printf("%d ; ", M[i]);
		else printf("%d", M[i]);
	}
}

void multi_3(int n){
	int M[n], i = 1;
	M[0] = 3;
	printf("Multiplos: ");
	for (i=1 ; i < n ; i++){
			M[i] = M[i-1]*3;
	}
	imprime(M, n);
}

void principal(){
	int n;
	printf("Digite um numero de de multiplos de 3 que você quer ver,\n");
	scanf("%d", &n);
	multi_3(n);
}



