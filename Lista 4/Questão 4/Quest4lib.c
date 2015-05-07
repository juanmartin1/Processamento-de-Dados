#include <stdio.h>

void principal(){
	int M[5][5], i = 0, j = 0, i1 = 0, i2 = 0;
	while(i<5){
		while(j<5){
			if( i == j)	M[i][j] = 1;
			else M[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	for(i=0 ; i<5 ; i++){
		for(j=0 ; j<5 ; j++){
			printf(" %d", M[i][j]);
		}
		printf("\n");
	}
}
	 
