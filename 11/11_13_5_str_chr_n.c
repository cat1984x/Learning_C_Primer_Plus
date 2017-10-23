#include <stdio.h>
#include <stdlib.h>
char * StrChr(char * st,char ch);

int main()
{
	char st[]="Father";
    char ch='F';
    puts(StrChr(st,ch));
	system("pause");
	return 0;
}

char * StrChr(char * st,char ch)
{
	while(*st!=ch&&*st!='\0')
		st++;
    if(*st=='\0')
		return NULL;
    else
		return st;
}
