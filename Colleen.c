#include <stdio.h>

/*
external comment
*/

void second()
{
	char *str = "#include <stdio.h>%c%c/*%cexternal comment%c*/%c%cvoid second()%c{%c%cchar *str = %c%s%c;%c%cprintf (str, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10);%c}%c%cint main()%c{%c%c/*%c%cinternal comment%c%c*/%c%csecond();%c}";
	printf (str, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10);
}

int main()
{
	/*
	internal comment
	*/
	second();
}