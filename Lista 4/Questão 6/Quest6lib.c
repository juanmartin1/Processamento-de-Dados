#include <stdio.h>

void principal(){
	int M[4][4], i = 0, j = 0, cont = 0;
	while(i<4){
		while(j<4){
			scanf("%d", &M[i][j]);
			if(M[i][j] > 10) cont++;
			j++;
		}
		i++;
		j = 0;
	}
	printf("Existem %d valores maiores que 10 na matriz.", cont);
}
	 
