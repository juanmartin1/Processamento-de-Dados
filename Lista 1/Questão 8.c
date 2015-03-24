#include <stdio.h>

int main(){
	float r, pi = 3.141592;
	printf("Digite o raio do circulo\n");
	scanf("%f", &r); 
	printf("\nA area do circulo e: %f", (r^2.0)*pi);
	return 0;
}
