#include <stdio.h>

void imprime(int M[][4], int I, int J){
	int i, j;
	for(i=0 ; i<I ; i++){
		for(j=0 ; j<J ; j++){
			printf(" %d", M[i][j]);
		}
		printf("\n");
	}
}

void principal(){
	int M[4][4], i = 0, j = 0, m, i1 = 0, i2 = 0;
	m = -999999;
	while(i<4){
		while(j<4){
			scanf("%d", &M[i][j]);
			if(M[i][j] > m ){
				m = M[i][j];
				i1 = i;
				i2 = j;
			}
			j++;
		}
		i++;
		j = 0;
	}
	imprime(M, 4, 4);
//	for(i=0 ; i<4 ; i++){
//		for(j=0 ; j<4 ; j++){
//			printf(" %d", M[i][j]);
//		}
//		printf("\n");
//	}
	printf("\nO indice do maior numero da matriz e M[%d][%d], o maior numero foi: %d", i1, i2, m);
}
	 
