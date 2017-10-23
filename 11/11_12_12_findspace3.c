#include <stdio.h>
#include <stdlib.h>

char * fspace(char * st);
int main()
{
	char * space;
    char st[]="akskjaksjsakj";
	space=fspace(st);
	puts(st);
    puts(space);
	system("pause");
	return 0;
}

char * fspace(char * st)
{	
    char * ret_val;
	while(*st!=' '&&*st!='\0')
		st++;
    if(*st==' ')
		ret_val=st;
    else
		ret_val=NULL;
	return ret_val;
}
