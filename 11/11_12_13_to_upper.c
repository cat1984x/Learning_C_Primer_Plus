#include <stdio.h>
#include <stdlib.h>

#define ANSWER "GRANT"
#define SIZE 40

char * s_gets(char * st, int n);
 
int main()
{
	char try[SIZE];

    puts("Who is buried in Grant's tomb?");    
    s_gets(try,SIZE);
	ToUpper(try);
	while(strcmp(try,ANSWER))
	{
		puts("Try again.");
        s_gets(try,SIZE);
		ToUpper(try);
    }
    puts("That's right.");
    
	system("pause");
	return 0;
}

void ToUpper(char * st)
{
    int i=0;
    while(st[i]!='\0')
	{
		st[i]=toupper(st[i]);
        i++;
    }
}


char * s_gets(char * st, int n)
{	
    char * ret_val;
    int i=0;
	ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
		while(st[i]!='\n'&&st[i]!='\0')
			i++;
        if(st[i]=='\n')
			st[i]='\0';
        else
			while(getchar()!='\n')
				continue;
    }
    return ret_val;
}
