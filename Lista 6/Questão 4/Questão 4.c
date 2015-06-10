#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define num 5

//Struct.
	typedef struct{
		char nome[20];
		int num_mat, n[3];
	}aluno;


void imprime_alunos(aluno *p, float *med, int e){     //Imprime as notas dos alunos
	int i=0;
	for(i=0 ; i<e ; i++){
		if(med[i] >= 6.0) printf("\nAluno: %s  -  Aprovado\n", p[i].nome);      //Caso o aluno tenha media maior ou igual a 6 ele é aprovado.
		else printf("\nAluno: %s  -  Reprovado\n", p[i].nome);                  //Caso o aluno tenha media menor que 6 o aluno é reprovado.
	}
}

int ler(char *str){    //Função para normalizar a leitura dos dados;
	char buf[1000];
	fgets(buf, 1000, stdin);
	if (buf[strlen(buf)-1] == '\n') buf[strlen(buf)-1] = '\0';
	strcpy(str, buf);
	return 0;
}

void big_low_med(aluno *p, float *med, int e){      //Define os indices da maior nota da primeira prova, da maior e da menor media.
	int i=0, M = 0, b = 0, l = 0;
	for(i=0 ; i<e ; i++){                           //i vai de 1 até e que é o numero de alunos.
		if(p[M].n[0] < p[i].n[0]) M = i;            //Guarda o indice do aluno que teve a maior nota na primeira prova.
		if(med[b] < med[i]) b = i;                  //Guarda o indice do aluno que teve maior média.
		if(med[l] > med[i]) l = i;                  //Guarda o indice do aluno que teve menor média.
	}
	printf("\nO aluno com maior nota na primeira prova foi: %s\n", p[M].nome);
	printf("O aluno com maior media geral foi: %s\n", p[b].nome);
	printf("O aluno com menor media geral foi: %s\n", p[l].nome);
}

void ler_alunos(aluno *p, int e, float *med){
	int i, j;
	char buff[15];
	for(i=0 ; i<e ; i++){
		printf("Digite o nome da aluno %d.\n", i+1);
		ler(p[i].nome);                                     //Lê o nome de cada aluno
		printf("Digite o numero de matricula do aluno %s.\n", p[i].nome);
 		ler(buff);                                          //Lê a matricula de cada aluno
		p[i].num_mat = atoi(buff);
		for(j=0 ; j<3 ; j++){
		   	printf("Digite a nota da prova %d do aluno %s.\n", j+1, p[i].nome);
			ler(buff);                                      //Le a nota de cada prova de cada aluno.
			p[i].n[j] = atoi(buff);
			med[i] += (p[i].n[j]*1.0);                      //faz o somatório das três notas de cada aluno.
		}
		med[i] = (med[i])/3.0;                              //Calcula a média de cada aluno.
	}
}

int main(){
	float med[num];
	aluno p[num];
	ler_alunos(p, num, med);
	big_low_med(p, med, num);
	imprime_alunos(p, med, num);
	return 0;
}
