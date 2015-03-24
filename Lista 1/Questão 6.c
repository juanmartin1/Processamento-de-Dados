#include <stdio.h>

int main(){
	float n1, n2, n3, n4;
	printf("Digite as quatro notas bimestrais do aluno.\n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4); 
	printf("\nA media do aluno foi foi: %.2f", (n1 + n2 + n3 + n4)/4);
	return 0;
}
