#ifndef QUEST3_H
#define QUEST3_H

#include <stdio.h>

void scanjogo_horizontal(int *M, int next);

void scanjogo_vertical(int *M, int next);

void scanjogo_diagonal(int *M, int next);

void printmatrix(int *M);

void lermat(int *M);

void principal();

#include "Quest3lib.c"

#endif
