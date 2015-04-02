#include "teste1lib.h"

void imprime(int a, int b){
	printf("Valores finais:\n a = %d\tb = %d", a,b);	
}

void troca(int a, int b){
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	imprime(a,b);
}

void principal(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Valores iniciais:\n a = %d\tb = %d\n", a,b);
	troca(a,b);
}


