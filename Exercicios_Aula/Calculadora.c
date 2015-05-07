#include<stdio.h>

int sum(int a, int b){
	int M;
	M = a + b;
	return M;
}

int sub(int a, int b){
	int M;
	M = a - b;
	return M;
}

int mult(int a, int b){
	int M;
	M = a*b;
	return M;
}

int div(int a, int b){
	int M;
	M = a/b;
	return M;
}

int main(){
	int cond = 0, Valor = 0, a = 0, b = 0;
	printf("Digite a funcao que deseja usar:\n");
	printf("\nPara Soma digite '1', para Subtracao digite '2'\nPara Multiplicacao digite '3', para Divisao digite '4'\n");
	scanf("%d", &cond);
	printf("Agora digite os dois valores da operacao\n");
	scanf("%d\n%d", &a, &b);
	if(cond == 1){
		Valor = sum(a, b);
	}
	if(cond == 2){
		Valor = sub(a, b);
	}
	if(cond == 3){
		Valor = mult(a, b);
	}
	if(cond == 4){
		Valor = div(a, b);
	}
	printf("\nO resultado da operacao foi: %d", Valor);
}

