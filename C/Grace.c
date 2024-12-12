#include <stdio.h>
/*
	This program will print its own source when run.
*/
#define FILE "Grace_kid.c"
#define CODE "#include <stdio.h>%c/*%c	This program will print its own source when run.%c*/%c#define FILE %c%s%c%c#define CODE %c%s%c%c#define FT(x)int main(){fprintf(fopen(FILE, x), CODE, 10, 10, 10, 10, 34, FILE, 34, 10, 34, CODE, 34, 10, 10, 34, 119, 34, 10);}%cFT(%c%c%c);%c"
#define FT(x)int main(){fprintf(fopen(FILE, x), CODE, 10, 10, 10, 10, 34, FILE, 34, 10, 34, CODE, 34, 10, 10, 34, 119, 34, 10);}
FT("w");
