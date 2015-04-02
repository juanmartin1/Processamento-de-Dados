#include<stdio.h>
#include<time.h>

void data(){
	char mes[4], dia[3], ano[5];
	strcpy(mes, "");
	strcpy(dia, "");
	strcpy(ano, "");
	strncat(mes, __DATE__ , 3);
	strncat(dia, __DATE__ +4, 2);
	strncat(ano, __DATE__ +7, 4);
	printf("A data e:%s/%s/%s\n", dia, mes, ano);
}

void hora(){
	char m[2], h[2];
	strcpy(m, "");
	strcpy(h, "");
	strncat(h,__TIME__,2);
	strncat(m,__TIME__+3,2);
	printf("A hora e: %s:%s\n",h, m);
}

void principal(){
	data();
	hora();
}
