#include <stdio.h>

int main(){
	float S, H;
	printf("Digite o valor do seu salario por hora");
	scanf("%f", &S);
	printf("Digite o numero de horas trabalhadas no mes");
	scanf("%f", &H);
	printf("O seu salario mensal e: %.2f", S*H);
}
