#include <stdio.h>
#include <stdlib.h>
char * s_gets(char * st, int n);
char* mystrncopy(char * target,char * source,char n);

int main()
{
	char target[50],source[50];
    char ch;
    int n;
    do
    {
		puts("请输入字符串：");
		s_gets(source,50);
		puts("请输入要copy数量：");
		scanf("%d",&n);
		mystrncopy(target,source,n);
        printf("copy的字符串为：%s\n",target);
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

char * mystrncopy(char * target,char * source,char n)
{
	int i=0;
    while(i<n&&source[i]!='\0')
	{
    	target[i]=source[i];
		i++;
    }
    if(source[i]=='\0')
		target[i]='\0';
    return target;
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
