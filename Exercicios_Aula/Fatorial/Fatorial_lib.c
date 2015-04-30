#include <stdio.h>

int fatorial(int n){
	int f = 1;
	if (n <= 1) return 1;
	while(n > 1){
		f *= n;
		n--;
	}
	return f;
}

void principal(){
	int f = 0, n = 0;
	scanf("%d", &n);
	f = fatorial(n);
	printf("%d", f);
}
