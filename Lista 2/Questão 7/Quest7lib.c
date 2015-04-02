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

int meio(float *n){
	float temp;
	temp = n[1];
	n[1] = n[2];
	n[2] = temp;
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
	float n[3], e = 3;
	int I;
	printf("Digite os valores de I, A, B, C respectivamente\n");
	scanf("%d", &I);
	ler(n, e);
	if (I == 1){
		crescente(n,e);
	}
	else if(I == 2){
		decrescente(n,e);
	}
	else if(I == 3){
		crescente(n,e);
		meio(n);
	}
	imprime(n, e);
}
