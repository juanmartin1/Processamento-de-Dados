#include <stdio.h>

int maior(float a, float b){
	if(a < b){
		printf("O maior numero e %.2f", b);
	}
	else if(b == a){
		printf("Os dois numeros sao iguais a %.2f", a);
	}
	else{
		printf("O maior numero e %.2f", a);
	}
	return 0;
}

int main(){
	float n1, n2;
	printf("Digite os dois numeros\n");
	scanf("%f %f", &n1, &n2);
	maior(n1,n2);
	return 0;
}
