#include <stdio.h>
#include <stdlib.h>

void corrige(char *G, char R[][10]){
	int e = 0, i , j, V[5];
	for(i=0; i<5 ; i++){
		e = 0;
		for(j=0 ; j<10 ; j++)if(R[i][j] == G[j]) e++;
		V[i] = e;
	}
	imprime_nota(V);
}

void imprime_nota(int *V){
	int i = 0;
	for(i=0; i<5 ; i++) printf("\nO aluno %d ficou com a nota: %d", (i+1), V[i]);
}

void principal(){
	int i = 0, j = 0, V[5];
	char G[10], R[5][10];
	printf("Digite as respostas do aluno %d todas juntas, Ex.: 'abcdabcdab'.", (i+1));
	gets(R[i]);
	for(i=1; i<5 ; i++){
		printf("Digite as respostas do aluno %d.", (i+1));
		gets(R[i]);
	}
	printf("\nAgora digite o gabarito.", i+1);
	gets(G);
	corrige(G, R);
}	 


