#include <stdio.h>

float med_p(float a, float b, float c){
	return (a*2 + b*3 + c*5)/10;
}

char conceito(float m){
	if(m<5) return 'E';
	if(m<6) return 'D';
	if(m<7) return 'C';
	if(m<8) return 'B';
	return 'A';
}

int main(){
	float n1, n2, n3, m;
	printf("Digite as tres notas do aluno");	
	scanf("%f %f %f", &n1, &n2, &n3);
	m = med_p(n1,n2,n3);
	printf("A media foi: %f\nO conceito foi %c", m, conceito(m));
	return 0;
}
