#include <stdio.h>

int ler(int *n, int e){
	int i = 0;
	for (i=0 ; i<e ; i++){
		scanf("%d", &n[i]);
	}
}

int imprime(int *n){
	int i = 0;
	for (i=0 ; i<3 ; i++){
		printf("%d", n[i]);
		if(i<2) printf("/");
	}
}

int compara(int *d1, int *d2){
	if (d1[2] > d2[2]) return 0;
	else if (d1[2] < d2[2]) return 1;
	
	if (d1[1] > d2[1]) return 0;
	else if (d1[1] < d2[1]) return 1;
	
	if(d1[0] > d2[00]) return 0;
	else if(d1[0] < d2[00]) return 1;
}

int main(){
	int d1[3], d2[3], c;
	printf("Digite as duas datas\n");	
	ler(d1, 3);
	ler(d2, 3);
	c = compara(d1, d2);
	if (c==0) imprime(d1);
	else imprime(d2);
	return 0;
}
