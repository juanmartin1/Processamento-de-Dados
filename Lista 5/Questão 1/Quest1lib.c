#include <stdio.h>

void imprime_matriz(int M[][6]){
	int i, j;
	printf("   C1	C2	C3	C4	C5	C6\n");
	for (i=0 ; i<3 ; i++){
		printf("L%d ", i+1);
		for (j=0 ; j<6 ; j++){
			printf("%d	", M[i][j]);
		}
		printf("\n");
	}
}

int soma_col_impar(int M[][6]){
	int i, j, S;
	for (j=0 ; j<6 ; j+=2){
		for (i=0 ; i<3 ; i++){
			S += M[i][j];
		}
	}
	return S;
}

float med_col_2e4(int M[][6]){
	int i; 
	float Med=0;
	for (i=0 ; i<3 ; i++){
		Med += M[i][1]*1.0 + M[i][3]*1.0;
	}
	return Med/6.0;
}

void troca_c6_por_c1_plus_c2(int M[][6]){
	int i;
	for (i=0 ; i<3 ; i++){
		M[i][5] = M[i][0] + M[i][1];
	}
}

void principal(){
	int M[3][6], i, j;
	for (i=0 ; i<3 ; i++){
		printf("Digite os elementos da linha %d\n", i+1);
		for (j=0 ; j<6 ; j++){
			scanf("%d", &M[i][j]);
		}
	}printf("Sua matriz e:\n");
	imprime_matriz(M);
	
	//Letra (a).
	printf("\nLetra (a):\nA soma dos elementos da coluna 1, 3 e 5 e: %d\n\nLetra (b): \n", soma_col_impar(M));
		
	//letra (b).
	printf("A media aritmetica dos elementos da coluna 2 e 4 e: %.2f", med_col_2e4(M));
	
	//letra (c).
	troca_c6_por_c1_plus_c2(M);
	printf("\nLetra (c):\n");
	printf("Sua nova matriz e:\n");
	imprime_matriz(M);
}
