#include<stdio.h>

void um(){
	int i = 1, j = 1;
	for (j=1 ; j <= 3 ; j++){
		printf(" ");
		for (i=1; i <= 100 ; i++){
			if(i<100) printf("%d ; ", i);
			else printf("%d", i);
		} 
		printf("\n");
	}
}

void dois(){
	int i = 1, j = 1;
	while(j <= 3){
		printf(" ");
		while(i <= 100){
			if(i<100) printf("%d ; ", i);
			else printf("%d", i);
			i++;
		} 
		j++;
		i = 1;
		printf("\n");
	}
}

void tres(){
	int i = 1, j = 1;
	
	do {
		printf(" ");
		
		do {
			if(i<100) printf("%d ; ", i);
			else printf("%d", i);
			i++;
		} while(i <= 100); 
		
		j++;
		i = 1;
		printf("\n");
	} while(j <= 3);
}


void principal(){
	int O;
	printf("Digite a Opcao de laco:\n 1 - Para 'for'\n 2 - Para 'while'\n 3 - Para 'do while'.\n");
	scanf("%d", &O);
	if (O == 1) um();
	else if (O == 2) dois();
	else if (O == 3) tres();
}



