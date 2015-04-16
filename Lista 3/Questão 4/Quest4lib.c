#include<stdio.h>

void multi_3(int n){
	int m = 3, i = 1;
	printf("Multiplos: ");
	for (i=1 ; i < n ; i++){
			m = m*3;
			printf(", %d", m);
	}
}

void principal(){
	int n;
	printf("Digite um numero de de multiplos de 3 que você quer ver,\n");
	scanf("%d", &n);
	multi_3(n);
}



