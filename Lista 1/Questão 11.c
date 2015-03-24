#include <stdio.h>

int main(){
	float F;
	printf("Digite a temperatura em Farenheit");
	scanf("%f", &F);
	printf("A temperatura em Celcius e: %.2f", (5*(F - 32))/9);
}
