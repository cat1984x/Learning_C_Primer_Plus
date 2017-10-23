#include <stdio.h>
#include <stdlib.h>
int main()
{
	char string[40];
    input(string,8);
    printf(string);
    getst(string,8);
    printf(string);

	system("pause");
	return 0;
}

void getst(char * st,int n)
{
	int i=0;
    st[i]=getchar();
    while(i<n&&st[i]!='\n'&&st[i]!='\0'&&st[i]!=' ')
    {
		i++;
        st[i]=getchar();
    }
	st[i+1]='\0';
}

void input(char *p, int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		*(p+i) = getchar();
		if(isspace(*(p+i))) break;
	}
	*(p+i) = '\0';
}
