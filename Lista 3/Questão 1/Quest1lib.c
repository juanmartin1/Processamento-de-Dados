#include "Quest1lib.h"

float principal(){
	float a = 0;
	printf("O maior numero digitado foi %f", maior(a));
}


float maior(float a){
	float M = -99999;
	while(a >= 0){
		scanf("%f", &a);
		if (a > M) M = a;
	}
	return M;
}
