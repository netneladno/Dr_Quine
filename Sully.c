#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
int i = 5;
if (i < 0){return(0);}
char filename[1000];
sprintf(filename, "Sully_%d.c", i);
if (access(filename, F_OK) != -1) {i--;sprintf(filename, "Sully_%d.c", i);}
FILE* file = fopen(filename, "w+");
if (!file){return(1);}
char *str = "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%cint main(){%cint i = 5;%cif (i < 0){return(0);}%cchar filename[1000];%c";
fprintf(file, str, 10,10,10,10,10,10,10);
char command[1000];
sprintf(command, "gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d; ./Sully_%d", i, i, i);
system(command);
}
