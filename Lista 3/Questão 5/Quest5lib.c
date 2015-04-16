#include<stdio.h>

void impar(int n){
	int I = 1, i = 0;
	printf("Impares: ");
	while (i < n){
		printf("%d ; ", I);
		I += 2;
		i++;
	}
}

void principal(){
	int n;
	printf("Digite um numero natural.\n");
	scanf("%d", &n);
	impar(n);
}



