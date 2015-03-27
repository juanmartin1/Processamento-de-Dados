#include <stdio.h>

float med(float a, float b, float c){
	return (a + b + c)/3;
}

int status(float m){
	if(m < 3){
		printf("Reprovado");
	}
	else if((m >= 3) && (m < 7)){
		printf("Para Exame");
	}
	else{
		printf("Aprovado");
	}
	return 0;
}

int main(){
	float n1, n2, n3, m;
	printf("Digite as tres notas do aluno\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	m = med(n1,n2,n3);
	printf("A media foi: %f\n E o aluno foi ", m);
	status(m);
	return 0;
}
