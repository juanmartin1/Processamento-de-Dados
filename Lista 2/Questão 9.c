#include<stdio.h>
#include<time.h>

int main()
{
char mes[4], dia[3], ano[5], m[2], h[2];
strcpy(mes, "");
strcpy(dia, "");
strcpy(ano, "");
strcpy(m, "");
strcpy(h, "");
strncat(mes, __DATE__ , 3);
strncat(dia, __DATE__ +4, 2);
strncat(ano, __DATE__ +7, 4);
strncat(h,__TIME__,2);
strncat(m,__TIME__+3,2);
printf("%s/%s/%s\n%s:%s\n", dia, mes, ano, h, m);
system("PAUSE");
}
