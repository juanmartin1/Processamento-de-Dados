#ifndef QUEST4_H
#define QUEST4_H

#include <stdio.h>

void principal();

void up(int *M, int i, int j);

void under(int *M, int i, int j);

void DiagPrincipal(int *M, int i, int j);

void scanmatrix(int *M);

void printmatrix(int *M);

#include "Quest4lib.c"

#endif
