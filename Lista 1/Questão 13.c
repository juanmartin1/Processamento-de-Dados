#include <stdio.h>

int main(){
	float n1, n2, n3;
	int p1, p2, p3;
	printf("Digite a nota 1 do aluno com seu respectivo peso\n");
	scanf("%f %d", &n1, &p1);
	printf("Digite a nota 2 do aluno com seu respectivo peso\n");
	scanf("%f %d", &n2, &p2);
	printf("Digite a nota 3 do aluno com seu respectivo peso\n");
	scanf("%f %d", &n3, &p3);	
	printf("\nA media do aluno foi: %.2f", ((n1*p1) + (n2*p2) + (n3*p3))/3);
}
