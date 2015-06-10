#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Struct.
	typedef struct{
		char nome[20], curso[100];
		long int num_mat;
	}aluno;
	
	
void imprime_alunos(aluno *p, int e){    //Imprime os nomes dos alunos e seus respectivos curso e numero de matricula.
	int i;
	for(i = 0 ; i<e ; i++){
		printf("\nNome: %s \nNumero de Mtricula: %d \nCurso: %s\n", p[i].nome, p[i].num_mat, p[i].curso);
	}
}

int ler(char *str){    //Função para normalizar a leitura dos dados;
	char buf[1000];
	fgets(buf, 1000, stdin);
	if (buf[strlen(buf)-1] == '\n') buf[strlen(buf)-1] = '\0';
	strcpy(str, buf);
	return 0;
}

void ler_alunos(aluno *p, int e){
	int i;
	char buff_mat[15];
	for(i = 0 ; i<e ; i++){
		printf("Digite o nome da aluno %d.\n", i+1);
		ler(p[i].nome);                                 //Lê o nome de cada aluno
    	printf("Digite o curso do aluno %s.\n", p[i].nome);
		ler(p[i].curso);                                //Lê o curso de cada aluno
		printf("Digite o numero de matricula do aluno %s.\n", p[i].nome);
		ler(buff_mat);                                  //Lê a matricula de cada aluno
		p[i].num_mat = atoi(buff_mat);
	}
}

int main(){
	aluno p[5];

	ler_alunos(p, 5);
	imprime_alunos(p, 5);
	return 0;
}
