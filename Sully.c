#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
int i = 5;
if (i <= 0){return(0);}
char filename[1000];
sprintf(filename, "Sully_%d.c", i);
if (access(filename, F_OK) != -1) {i--;sprintf(filename, "Sully_%d.c", i);}
FILE* file = fopen(filename, "w+");
if (!file){return(1);}
char *str = "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%cint main(){%cint i = %d;%cif (i <= 0){return(0);}%cchar filename[1000];%csprintf(filename, %cSully_%%d.c%c, i);%cif (access(filename, F_OK) != -1) {i--;sprintf(filename, %cSully_%%d.c%c, i);}%cFILE* file = fopen(filename, %cw+%c);%cif (!file){return(1);}%cchar *str = %c%s%c;%cfprintf(file, str, 10,10,10,10,i,10,10,10,34,34,10,34,34,10,34,34,10,10,34,str,34,10,10,10,34,34,10,10);%cchar command[1000];%csprintf(command, %cgcc -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d; ./Sully_%%d%c, i, i, i);%cfclose(file);%csystem(command);}";
fprintf(file, str, 10,10,10,10,i,10,10,10,34,34,10,34,34,10,34,34,10,10,34,str,34,10,10,10,34,34,10,10);
char command[1000];
sprintf(command, "gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d; ./Sully_%d", i, i, i);
fclose(file);
system(command);}