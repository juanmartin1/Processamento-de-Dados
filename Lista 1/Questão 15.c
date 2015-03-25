#include <stdio.h>

int main(){
	float S, A;
	printf("Digite o salario e o aumento em percentual\n");
	scanf("%f %f", &S, &A);	
	printf("\nO salario com o aumento e: %.2f", (S*(1 + (A/100))));
}
