#include <stdio.h>
/*comment*/
#define FILEOPEN FILE* file = fopen("Grace_kid.c", "w+");
#define BAD if (!file){return(1);}
#define MAIN int main() {FILEOPEN BAD char *str = "#include <stdio.h>%c/*comment*/%c#define FILEOPEN FILE* file = fopen(%cGrace_kid.c%c, %cw+%c);%c#define BAD if (!file){return(1);}%c#define MAIN int main() {FILEOPEN BAD char *str = %c%s%c; fprintf(file, str, 10, 10, 34, 34, 34, 34, 10, 10, 34, str, 34, 10);}%cMAIN"; fprintf(file, str, 10, 10, 34, 34, 34, 34, 10, 10, 34, str, 34, 10);}
MAIN