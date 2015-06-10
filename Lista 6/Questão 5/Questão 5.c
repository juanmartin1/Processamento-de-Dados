#include <stdio.h>

typedef struct{
	int hora, minuto, segundo;
}horario;

typedef struct{
	int dia, mes, ano;
}data;

typedef struct{
	horario h;
	data d;
	char descricao[1000];
}comprimisso;
