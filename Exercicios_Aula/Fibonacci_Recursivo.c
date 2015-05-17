#include <stdio.h>

//Função para a resolução da sequencia FIbonacci.
//utilizando o metodo recursivo.


int fibonati_rec(int n, int x1, int x2){
	if (n == 0)	return 0;
	
	printf("\n%d", x1);	
	return fibonati_rec(n-1, x2, x2 + x1);
}


int main(){
	int n;
	scanf("%d", &n);  //n = Numero de elementos da sequencia.
	fibonati_rec(n, 0, 1);
}
