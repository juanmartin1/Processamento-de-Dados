#include <stdio.h>
#include <math.h>

float soma(float a, float b) {
	return (a + b);
}

float sub(float a, float b) {
	return (a - b);
}

float mult(float a, float b) {
	return (a*b);
}

float div(float a, float b) {
	return (a/b);
}

float raiz(float c) {
	return sqrt(c);
}

float opcao(int O){
	if((O >= 1) && (O < 5)){
		float a, b;		
		printf("Digite os dois numeros a serem operados");
		scanf("%f %f", &a, &b);
		if(O == 1){
			printf("A soma foi: %.2f", soma(a,b));
		}
		else if(O == 2){
			printf("A subtracao foi: %.2f", sub(a,b));
		}
		else if(O == 3){
			printf("%.2f", mult(a,b));
		}
		else if(O == 4){
			printf("%.2f", div(a,b));
		}
	}
	else if(O == 5){
		float c;
		printf("Digite o numero a ser operado\n");
		scanf("%f", &c);
		printf("%.2f", raiz(c));
	}
	return 0;
}

void principal(){
	int O;
	printf("Menu de opcoes:\n 1. Somar dois numeros\n 2. Subtrair dois numeros\n 3. Multiplicar dois numeros\n 4. Dividir dois numeros\n 5. Raiz quadrada de um numero\nDigite a opcao desejada\n");
	scanf("%d", &O);
	opcao(O);
}

