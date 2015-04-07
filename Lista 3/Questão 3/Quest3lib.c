#include<stdio.h>

void imprime(int* F, int n){
	int i = 0;
	for (i=0 ; i < n ; i++){
		if(i < n-1 )printf("%d - ", F[i]);
		else printf("%d", F[i]);
	}
}

void fibo(int n){
	int F[n + 1], i = 2;
	F[0] = 0;
	F[1] = 1;
	printf("Fibonacci: ", F[0]);
	if (n == 0){
		printf("%d", F[0]);
	}
	else if (n == 1){
		printf("%d, %d", F[0], F[1]);
	}
	else if (n > 1){
		for (i=0 ; i <= n - 2 ; i++){
			F[i+2] = F[i] + F[i+1];
		}
		imprime(F, n);
	}
}

void principal(){
	int n;
	printf("Digite um numero de elementos da sequencia Fibonacci que você quer ver,\n");
	scanf("%d", &n);
	fibo(n);
}



