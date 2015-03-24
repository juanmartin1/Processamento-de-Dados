#include <stdio.h>

int main(){
	float n1, n2, n3;
	printf("Digite as tres notas do aluno\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	printf("\nA media do aluno e: %.2f", (n1 + n2 + n3)/3);
}
