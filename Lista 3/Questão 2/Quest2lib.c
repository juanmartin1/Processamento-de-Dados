#include<stdio.h>
void maior(float x, float *M){
	if (x > (*M)) (*M) = x;
}

void menor(float x, float *m){
	if (x < (*m)) (*m) = x;
}

void cons_por_categ(float cons, int cod, float *R, float *C, float *I){
	if (cod == 1){
		(*R) += cons;
	}
	else if (cod == 2){
		(*C) += cons;
	}
	else if (cod == 3){
		(*I) += cons;
	}
}

float media(float soma, int n_hab){
	return soma/n_hab;
}

void imprime(float M, float m, float med, float R, float C, float I){
	printf("O maior consumo foi: %.2f", M);
	printf("O menor consumo foi: %.2f", m);
	printf("a media de consumo foi: %.2f", med);
	printf("O consumo da categoria 1 foi: %.2f", R);
	printf("O consumo da categoria 2 foi: %.2f", C);
	printf("O consumo da categoria 3 foi: %.2f", I);
}

void cadastro(int n_hab, float kwh){
	int cod[n_hab], i = 0;
	float cons[n_hab], M = -999999.0, m = 999999.0, R = 0.0, C = 0.0, I = 0.0, med, soma = 0.0;
	
	for (i = 0 ; i < n_hab ; i++){
		printf("Digite o consumo do mes do habitante %d e seu respectivo codigo de consumidor.", i);
		scanf("%f %d", &cons[i], &cod[i]);
		maior(cons[i], &M);
		menor(cons[i], &m);
		soma += cons[i];
		cons_por_categ(cons[i], cod[i], &R, &C, &I);
	}
	med = media(soma, n_hab);
	imprime(M, m, med, R, C, I);
}


void principal() {
	int n_hab;
	float kwh;
	printf("Digite o numero de habitantes e o preco do KW por hora");
	scanf("%d %f", &n_hab, &kwh);
	cadastro(n_hab, kwh);
}

