#include<stdio.h>

void imprime(int* F, int i){
	int e = 0;
	for (e=0 ; e < i ; e++){
		if(e < i-1)printf("%d - ", F[e]);
		else printf("%d", F[e]);
	}
}

void fibo(int n){
	int F[n + 1], i = 2;
	F[0] = 0;
	F[1] = 1;
	printf("Fibonacci: ", F[0]);
	if (n == 0){
		printf("%d, %d", F[0], F[1]);
	}
	else if (n > 0){
		for (i=2 ; F[i-1] <= n ; i++){
			F[i] = F[i-1] + F[i-2];
		}
		imprime(F, i);
	}
}

void principal(){
	int n;
	printf("Digite um numero de elementos da sequencia Fibonacci que você quer ver,\n");
	scanf("%d", &n);
	fibo(n);
}



