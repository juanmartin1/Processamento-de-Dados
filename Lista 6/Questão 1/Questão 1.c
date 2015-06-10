#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int id;
	char nome[20], endereco[100];
}dados;

void imprime(dados p){                      //Imprime os dados.
	printf("\nNoome: %s \nIdade: %d\nEndereco: %s", p.nome, p.id, p.endereco);
}

int ler(char *str){    //Função para normalizar a leitura dos dados;
	fgets(str, 1000, stdin);
	if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';  //Finaliza a string no lugar do '\n'.
	return 0;
}

void ler_dad(dados *p){
	char buff[15];
	printf("Digite o nome da pessoa.\n");
	ler(p->nome);                                   //Lê o nome.
   	printf("Digite a idade de %s.\n", p->nome);
	ler(buff);                         				//Lê a idade.
	p->id = atoi(buff);
	printf("Digite o endereco de %s.\n", p->nome);
    ler(p->endereco);                               //Lê o endereço.
 }

int main(){
	dados p;
	ler_dad(&p);
	imprime(p);
	return 0;
}
