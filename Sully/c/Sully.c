#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int x = 5;
	char sully[15] = {"Sully_x.c"};
	if (access("Sully_5.c", R_OK) != -1)
		x--;
	char *code = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$c%1$cint main(void)%1$c{%1$c	int x = %4$d;%1$c	char sully[15] = {%2$cSully_x.c%2$c};%1$c	if (access(%2$cSully_5.c%2$c, R_OK) != -1)%1$c		x--;%1$c	char *code = %2$c%3$s%2$c;%1$c	sully[6] = x + 48;%1$c	FILE *file = fopen(sully, %2$cw%2$c);%1$c	if (!file)%1$c		return (0);%1$c	fprintf(file, code, 10, 34, code, x, 37);%1$c	fclose(file);%1$c	char cmd[500];%1$c	sprintf(cmd, %2$cgcc -o Sully_%5$c1$d Sully_%5$c1$d.c && ./Sully_%5$c1$d%2$c, x);%1$c	if (x > 0)%1$c		system(cmd);%1$c}";
	sully[6] = x + 48;
	FILE *file = fopen(sully, "w");
	if (!file)
		return (0);
	fprintf(file, code, 10, 34, code, x, 37);
	fclose(file);
	char cmd[500];
	sprintf(cmd, "gcc -o Sully_%1$d Sully_%1$d.c && ./Sully_%1$d", x);
	if (x > 0)
		system(cmd);
}