#include <stdio.h>

int par_impar(int a){
	if(a % 2 == 0){
		printf("O maior numero e par");
	}
	else printf("o numero e impar");
	return 0;
}

void principal(){
	int n;
	printf("Digite o numero\n");
	scanf("%d", &n);
	par_impar(n);
}
