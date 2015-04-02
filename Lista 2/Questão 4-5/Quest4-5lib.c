#include <stdio.h>

int crescente(float *n, int e){
	int i, c = 0;
	float temp;
	while(c == 0){
		c = 1;
		i = 0;
		while (i < e - 1){
			if(n[i] > n[i + 1]){
				temp = n[i];
				n[i] = n[i + 1];
				n[i + 1] = temp;
				c = 0;
			}
			i++;
		}
	}
	return 0;
}

int decrescente(float *n, int e){
	int i, c = 0;
	float temp;
	while(c == 0){
		c = 1;
		i = 0;
		while (i < e - 1){
			if(n[i] < n[i + 1]){
				temp = n[i];
				n[i] = n[i + 1];
				n[i + 1] = temp;
				c = 0;
			}
			i++;
		}
	}
	return 0;
}

int ler(float *n, int e){
	int i = 0;
	for (i=0 ; i<e ; i++){
		scanf("%f", &n[i]);
	}
}

int imprime(float *n, int e){
	int i = 0;
	for (i=0 ; i<e ; i++){
		printf("%.2f\t", n[i]);
	}
}

void principal(){
	int c;
	float n[10], e;
	e = sizeof(n)/4;
	printf("Para ordenar em ordem crescente digite 1, para ordem decrescente digite 2\n");
	scanf("%d", &c);
	printf("Digite os tres numeros\n");
	ler(n, e);
	if(c == 1) crescente(n,e);
	else if(c == 2) decrescente(n,e);
	imprime(n, e);
}
