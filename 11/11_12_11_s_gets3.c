#include <stdio.h>
#include <stdlib.h>

char * s_gets(char * st, int n);
int main()
{
	char st[8];
    int n = 7;
    char * str;
    str=s_gets(st,8);
    while(str)
    {
		puts(str);
		str=s_gets(st,8);
    }
	system("pause");
	return 0;
}

char * s_gets(char * st, int n)
{	
    char * ret_val,ch;
  	ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
		char *ch;
		if(ch=strchr(st,'\n'))
        	*ch='\0';
        else
			while(getchar()!='\n')
				continue;
    }
    return ret_val;

}
