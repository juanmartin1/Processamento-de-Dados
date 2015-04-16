#include<stdio.h>

void fibo(int n){
	long int f = 1, a = 0, b = 1, i = 2;
	printf("Fibonacci: ");
	if (n > 0){
		printf("%d - %d", a, b);
		for (i=0 ; f <= n ; i++){
			f = a + b;
			a = b;
			b = f;
			printf(" - %d", f);
		}
	}
}

void principal(){
	int n;
	printf("Digite um numero de elementos da sequencia Fibonacci que você quer ver,\n");
	scanf("%d", &n);
	fibo(n);
}



