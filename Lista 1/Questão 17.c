#include <stdio.h>

int main(){
	float S;
	printf("Digite o salario\n");
	scanf("%f", &S);	
	printf("\nO salario liquido e: %.2f", (S*0.9) + 50);
}
