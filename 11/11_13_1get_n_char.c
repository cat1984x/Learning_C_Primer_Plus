#include <stdio.h>
#include <stdlib.h>
int main()
{
	char string[40];
    getst(string,8);
    puts(string);
	
	system("pause");
	return 0;
}

void getst(char * st,int n)
{
	int i;
    for(i=0;i<n;i++)
    {
		st[i]=getchar();
    }
	st[i]='\0';
}
