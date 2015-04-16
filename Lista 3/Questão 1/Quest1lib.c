#include "Quest1lib.h"

void negativo(int n, int* m, int* M){
	while(n >= 0){
		if(n > (*M)) (*M) = n;
		if(n < (*m)) (*m) = n;
		scanf("%d", &n);
	}
}

void principal(){
	int n = 0, m = 99999, M = -99999;
	scanf("%d", &n);
	negativo(n, &m, &M);
	printf("O maior numero digitado foi %d\nO menor numero digitado foi: %d", M, m);
}
