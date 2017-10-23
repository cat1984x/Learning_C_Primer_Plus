#include <stdio.h>
#include <stdlib.h>
int is_within(char * st,char ch);
char * s_gets(char * st, int n);

int main()
{
	char st[50];
    char ch;
    do
    {
		puts("请输入字符串：");
		s_gets(st,50);
		puts("请输入要查找的字符：");
		scanf("%c",&ch);
        while(getchar()!='\n')
			continue;
		if(is_within(st,ch))
			printf("字符%c在%s中。\n",ch,st);
		else
			printf("字符%c不在%s中。\n",ch,st);
        puts("输入任意字符继续，输入q退出");
		scanf("%c",&ch);        
        while(getchar()!='\n')
			continue;
    }
    while(ch!='q');
    puts("谢谢使用");
	system("pause");
	return 0;
}

int is_within(char * st,char ch)
{
	while(*st!=ch&&*st!='\0')
		st++;
	if(*st=='\0')
		return 0;
    else
		return 1;
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
