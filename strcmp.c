#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[100],b[100];
int main()
{
	gets(a);
    gets(b);
    if (strcmp(a,b)<=0)
    {
		puts(a);
        puts(b);
        
    }
    else
    {
		puts(b);
        puts(a);
    }
	system("pause");
	return 0;
}
