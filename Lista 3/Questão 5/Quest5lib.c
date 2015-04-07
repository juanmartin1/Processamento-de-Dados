#include<stdio.h>

void imprime(int* I, int n){
	int i = 0;
	for (i=0 ; i < n ; i++){
		if(i < n-1 )printf("%d ; ", I[i]);
		else printf("%d", I[i]);
	}
}

void impar(int n){
	int I[n], i = 0, c = 1;
	printf("Impares: ");
	while (i < n){
		if (c%2 == 1){
			I[i] = c;
			i++;
		}
		c++;
	}
	imprime(I, n);
}

void principal(){
	int n;
	printf("Digite um numero natural.\n");
	scanf("%d", &n);
	impar(n);
}



