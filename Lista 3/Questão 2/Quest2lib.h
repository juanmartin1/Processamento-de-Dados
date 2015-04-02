#ifndef QUEST1_H
#define QUEST1_H

#include <stdio.h>


//Função principal
void principal();

//Cadastro dos habitantes.
void cadastro(int n_hab, float kwh);

//Define o maior consumo.
void maior(float x, float *M);

//Define o menor consumo.
void menor(float x, float *m);

//Da o consumo total por categoria.
void cons_por_categ(float cons, int cod, float *R, float *C, float *I);

//Calcula a media do consumo total.
float media(float cons_t, int n_hab);

//Imprime todos os valores.
void imprime(float M, float m, float med, float R, float C, float I);


#include "Quest2lib.c"

#endif
