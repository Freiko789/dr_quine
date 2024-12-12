#include <stdio.h>

int	Somme(int a, int b) {
	a += b;
	return a;
}
/*
premier commentaire
*/
int main() {
	char *program = "#include <stdio.h>%c%cint	Somme(int a, int b) {%c	a += b;%c	return a;%c}%c/*%cpremier commentaire%c*/%cint main() {%c	char *program = %c%s%c;%c	Somme(1,1);%c	/*%c		2 eme commentaire%c	*/%c	printf(program, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, program, 34, 10, 10, 10, 10, 10, 10, 10);%c}%c";
	Somme(1,1);
	/*
		2 eme commentaire
	*/
	printf(program, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, program, 34, 10, 10, 10, 10, 10, 10, 10);
}
