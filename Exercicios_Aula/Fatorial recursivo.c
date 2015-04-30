#include <stdio.h>

//Função para a resolução do Fatorial.
//utilizando o metodo recursivo.


int fatorial(int n){
	if (n <= 1){
		return 1;
	}
	printf("\n%d", n);
	return n*fatorial(n-1);
}


int main(){
	int f = 0, n = 0;
	scanf("%d", &n);
	f = fatorial(n);
	printf("\n\n%d", f);
}
