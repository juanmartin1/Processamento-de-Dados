#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Struct.
	typedef struct{
		char nome[20], endereco[100];
		long int tel;
	}dados;
	
	
void imprime_dad(dados *p, int e){
	int i;
	for(i = 0 ; i<e ; i++){
		printf("\nNome: %s \nTel: %d \nEndereco: %s\n", p[i].nome, p[i].tel, p[i].endereco);
	}
}

void transfere(dados *p2, dados *p1){
	int i, k;
	for (i=0 ; i<strlen(p1->nome) ; i++){
		p2->nome[i] = p1->nome[i];       //Passa o valor de p1->nome para p2->nome;
	}
	p2->nome[i] = '\0';     //Finaliza a string p2->nome;

	for (i=0 ; i<strlen(p1->endereco) ; i++){
		p2->endereco[i] = p1->endereco[i];      //Passa o valor de p1->nome para p2->nome;
	}
	p2->endereco[i] = '\0';     //Finaliza a string p2->nome;

	p2->tel = p1->tel;     //Passa o valor de p1->tel para p2->tel;
}

void ordena2(dados *p, dados *p2, int e){
	int i, j, k, c, u;
	dados temp;                     //Cria uma estrutura temporaria
	for (i=0 ; i<e ; i++){          //Enquanto i menor que e, i++;
		transfere(&temp, p+i);          //Transfere o a estrutura p[i] para temp;
		c = 0;
		for (j=0 ; j<e ; j++){      //Enquanto j menor que e, j++;
			if(temp.nome[0] > p[j].nome[0]){        //Caso o temp.nome seja maior que p[j].nome:
                transfere(&temp, p+j);              //Transfere a estrutura p[j] para temp;
				c = j;                              //Guarda o valor de j;
			}
			else if(temp.nome[0] == p[j].nome[0]){      //Caso o primeiro caracter de temp.nome seja igual ao primeiro caracter de p[j].nome:
				u = 0;
				while(temp.nome[u] == p[j].nome[u]){        //Enquanto os caracteres da posição u sejam iguais:
					if((u == strlen(p[j].nome)) || (u == strlen(temp.nome))) break;  //Caso chegue ao final de uma das duas strings BREAK;
					if(temp.nome[u] < p[j].nome[u]) break;                              //Caso a string temp.nome  seja menor que a p[j].nome BREAK;
					u++;     												
				}
				if(temp.nome[u] > p[j].nome[u]){     //Se o caracter do nome da struct temporaria for maior que o da struct fornecida;
					transfere(&temp, p+j);           //Transfere os dados da estrutura p[j] para a estrutura temp;
					c = j;                           //Guarda o valor de j;
					break;
				}
			}
		}
		transfere(p2+i, &temp);         //Transfere o valor de temp(o menor) para a estrutura p2;
		p[c].nome[0] = 'z'; p[c].nome[1] = 'z'; p[c].nome[2] = 'z'; p[c].nome[3] = '\0';  //Torna a string p[c] inascecivel;
	}
}

int ler(char *str){    //Função para normalizar a leitura dos dados;
	char buf[1000];
	fgets(buf, 1000, stdin);
	if (buf[strlen(buf)-1] == '\n') buf[strlen(buf)-1] = '\0';
	strcpy(str, buf);
	return 0;
}

void ler_dad(dados *p, int e){
	int i;
	char buff_tel[15];
	for(i = 0 ; i<e ; i++){
		printf("Digite o nome da pessoa %d   OBS.: Letras Maiusculas são diferentes de minusculas.\n", i);
		ler(p[i].nome);
    	printf("Digite o endereco de %s.\n", p[i].nome);
		ler(p[i].endereco);
		printf("Digite o telefone de %s.\n", p[i].nome);
		ler(buff_tel);
		p[i].tel = atoi(buff_tel);
	}
}

int main(){
	dados p[5], p2[5];

	ler_dad(p, 5);
	ordena2(p, p2, 5);
	imprime_dad(p2, 5);
	return 0;
}
