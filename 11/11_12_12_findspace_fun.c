#include <stdio.h>
#include <stdlib.h>

char * fspace(char * st);
int main()
{
	char * space;
    char st[]="akskja  ksjsakj";
	space=fspace(st);
	puts(st);
    puts(space);
	system("pause");
	return 0;
}

char * fspace(char * st)
{	
    char * ret_val;
	ret_val=strchr(st,' ');
	return ret_val;
}
