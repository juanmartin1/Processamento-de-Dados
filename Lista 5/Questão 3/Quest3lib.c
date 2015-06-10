#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Varaiveis Globais
//
	int px[9], py[9], e=0;
	int pgx[9], pgy[9], h=0;
//

void scanjogo_horizontal(int *M, int next){
	int i, j, c = 0, cont, x, y, zero = 0;
	for (i=0 ; i<3 ; i++) {
		cont = 0;		//Zera a variavel cont.
		zero = 0;		//Zera a variavel zero.
		for (j=0 ; j<3 ; j++){
			if((M[i*3 + j])==next) cont++;	//Verifica se a jogada M[i][j] foi feita pelo proximo jogador.
			else if(((M[i*3 + j])==0)) {	//Verifica se ainda não foi feita uma jogada na posição M[i][j].
				zero++;		//Soma mais um a zero.
				y = i+1; 	//Guarda a linha.
				x = j+1;	//Guarda a coluna.
				pgx[h] = x;
				pgy[h] = y;
				h++;
			}
		}
		if((cont==2)&&(zero==1)){	//Caso na linha M[i] tenham sido feitas 2 jogadas pelo proximo jogador e ainda haja um espaço em branco;
			px[e] = x;
			py[e] = y;
			e++;
		} 
		else if (cont == 3) {		//Caso na linha M[i] tenham sido feitas 3 jogadas pelo proximo jogador, ele ja ganhou o jogo;
			printf ("Este jogador ja ganhou o jogo.");
			exit(1);
		}
	}
}

void scanjogo_vertical(int *M, int next){
	int i, j, c = 0, cont, x, y, zero = 0;
	for (j=0 ; j<3 ; j++) {
		cont = 0;		//Zera a variavel cont.
		zero = 0;		//Zera a variavel zero.
		for (i=0 ; i<3 ; i++){
			if((M[i*3 + j])==next) cont++;	//Verifica se a jogada M[i][j] foi feita pelo proximo jogador.
			else if(((M[i*3 + j])==0)) {	//Verifica se ainda não foi feita uma jogada na posição M[i][j].
				zero++;		//Soma mais um a zero.
				y = i+1;	//Guarda a linha.
				x = j+1;	//Guarda a coluna.
				pgx[h] = x;
				pgy[h] = y;
				h++;
			}
		}
		if((cont==2)&&(zero==1)){	//Caso na linha M[i] tenham sido feitas 2 jogadas pelo proximo jogador e ainda haja um espaço em branco;
			px[e] = x;
			py[e] = y;
			e++;
		} 
		else if (cont == 3) {		//Caso na linha M[i] tenham sido feitas 3 jogadas pelo proximo jogador, ele ja ganhou o jogo;
			printf ("Este jogador ja ganhou o jogo.");
			exit(1);
		}
	}
}

void scanjogo_diagonal(int *M, int next){
	int i=0, j=0, c = 0, cont, x, y, zero = 0, z=0;
	while(i<3){
		if(cont+zero == 3) j=2;
		cont = 0;		//Zera a variavel cont.
		zero = 0;		//Zera a variavel zero.
		while(j<3){
			if(z==0){
				if((M[i*3 + j])==next) cont++;	//Verifica se a jogada M[i][j] foi feita pelo proximo jogador.
				else if(((M[i*3 + j])==0)) {	//Verifica se ainda não foi feita uma jogada na posição M[i][j].
					zero++;		//Soma mais um a zero.
					y = ++i;	//Guarda a linha.
					x = ++j;	//Guarda a coluna.
				}
				j++; i++;
			}
			else if(z==1){
				if((M[i*3 + j])==next) cont++;	//Verifica se a jogada M[i][j] foi feita pelo proximo jogador.
				else if(((M[i*3 + j])==0)) {	//Verifica se ainda não foi feita uma jogada na posição M[i][j].
					zero++;		//Soma mais um a zero.
					y = ++i;	//Guarda a linha.
					x = ++j;	//Guarda a coluna.
					pgx[h] = x;
					pgy[h] = y;
					h++;
				}
				j--; i++;
			}
			if(j == 3) {
				z=1;
				i=0;
			}
			if(j == -1) break;
		}
		if((cont==2)&&(zero==1)){	//Caso na diagonal tenham sido feitas 2 jogadas pelo proximo jogador e ainda haja um espaço em branco;
			px[e] = x;
			py[e] = y;
			e++;
		}
		else if (cont == 3) {		//Caso na diagonal tenham sido feitas 3 jogadas pelo proximo jogador, ele ja ganhou o jogo;
			printf ("Este jogador ja ganhou o jogo.");
			exit(1);
		}
	}
}

void printmatrix(int *M){
	int i, j, c=0, n;
	printf("	1	2	3	\n");
	for (i=0 ; i<3 ; i++) {
		printf("\n%d", i+1);
		for (j=0 ; j<3 ; j++){
			printf("	%d", M[i*3 + j]);
		}		
	}
	for(i=0; i<e ; i++){
		c=0;
		for(j=0 ; j<i ; j++){
			if((py[i] == py[j]) && (px[i] == px[j])){
				c=1;
				break;
			}
		}
		if(c==0) printf("\nUma das possiveis jogadas para ganhar o jogo e: (%d|%d)", py[i], px[i]);
	}
	for(i=0 ; i<h ; i++){
		c=0;
		for(j=0 ; j<e ; j++){
			if((pgx[i] == px[j]) && (pgy[i] == py[j])){
				c=1;
				break;
			}
		}
		for(n=0 ; n<i ; n++){
			if((pgx[i] == pgx[n]) && (pgy[i] == pgy[n])){
				c=1;
				break;
			}
		}
     	if(c==0) printf("\nUma das possiveis jogadas e: (%d|%d)", pgy[i], pgx[i]);
	}
}

void lermat(int *M){
	int i, j;
	printf("Digite as jogadas ja feitas\n");
	for (i=0 ; i<3 ; i++) {
		printf("Agora digite a linha %d\n", i+1);
		for (j=0 ; j<3 ; j++){
			scanf("%d", &M[i*3 + j]);
		}
	}
}

void principal(){
	int M[3][3], next, i;
	lermat((int*)M);
	printf("Digite quem é o proximo jogador");
	scanf("%d", &next);
	scanjogo_horizontal((int*)M, next);
	scanjogo_vertical((int*)M, next);
	scanjogo_diagonal((int*)M, next);
	printmatrix((int*)M);
}
