#include<stdio.h>

void imprime(int I, int n){
	printf("A soma dos primeiros %d numeros pares foi: %d", n, I);
}

int par(int n){
	int I, i = 0, c = 1;
	while (i < n){
		if (c%2 == 0){
			I += c;
			i++;
		}
		c++;
	}
	return I;
}

void principal(){
	int n, I;
	printf("Digite um numero natural.\n");
	scanf("%d", &n);
	I = par(n);
	imprime(I, n);
}



