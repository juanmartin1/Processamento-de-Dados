#include <stdio.h>

void principal(){
	int M1[4][4], M2[4][4], M3[4][4], i = 0, j = 0;
	while(i<4){
		while(j<4){
			scanf("%d", &M1[i][j]);
			j++;
		}
		i++;
		j = 0;
	}
	i = 0;
	j = 0;
	while(i<4){
		while(j<4){
			scanf("%d", &M2[i][j]);
			j++;
		}
		i++;
		j = 0;
	}
	
	for(i=0 ; i<4 ; i++){
		for(j=0 ; j<4 ; j++){
			if(M1[i][j] >= M2[i][j]){
				M3[i][j] = M1[i][j];
			}
			else{
				M3[i][j] = M2[i][j];
			}
			printf(" %d", M3[i][j]);
		}
		printf("\n");
	}
}
	 
