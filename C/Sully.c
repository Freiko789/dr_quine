#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define FILE "Sully_"
int main(){
int nb = 5;
char buf[10];
char *code = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$c#define FILE %2$c%3$s%2$c%1$cint main(){%1$cint nb = %5$d;%1$cchar buf[10];%1$cchar *code = %2$c%4$s%2$c;%1$cchar command[256];%1$csprintf(buf, %2$cSully_%6$c%9$c.c%2$c, nb);%1$cvoid *fd = fopen(buf, %2$c%7$c%2$c);%1$cfprintf(fd, code, 10, 34, FILE, code, nb - 1, 37, 119, 115, 100);%1$cfclose(fd);%1$cif (nb > 0){%1$csnprintf(command, sizeof(command), %2$cgcc -o %6$c%8$c%6$c%9$c %6$c%8$c%2$c, FILE, nb, buf);%1$csystem(command);%1$csnprintf(command, sizeof(command), %2$c./Sully_%6$c%9$c%2$c, nb);%1$csystem(command);%1$c}%1$creturn 0;%1$c}%1$c";
char command[256];
sprintf(buf, "Sully_%d.c", nb);
void *fd = fopen(buf, "w");
fprintf(fd, code, 10, 34, FILE, code, nb - 1, 37, 119, 115, 100);
fclose(fd);
if (nb > 0){
snprintf(command, sizeof(command), "gcc -o %s%d %s", FILE, nb, buf);
system(command);
snprintf(command, sizeof(command), "./Sully_%d", nb);
system(command);
}
return 0;
}
