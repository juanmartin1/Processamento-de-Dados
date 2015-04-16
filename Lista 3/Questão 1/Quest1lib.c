#include "Quest1lib.h"

int maior(int n, int M) {
	if(n > M) return n;
}

int menor(int n, int m) {
	if(n < m) return n;
}

void principal(){
	int n = 0, m = 99999, M = -99999;
	scanf("%d", &n);
	while(n >= 0){
		if(n > M) M = n;
		if(n < m) m = n;
		scanf("%d", &n);
	}
	printf("O maior numero digitado foi %d\nO menor numero digitado foi: %d", M, m);
}
