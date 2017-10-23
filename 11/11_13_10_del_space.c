#include <stdio.h>
#include <stdlib.h>
char * s_gets(char * st, int n);
void del_space(char * source);

int main()
{
	char source[50];
    char ch;
	
    do
    {
		puts("请输入字符串：");
		s_gets(source,50);
        del_space(source);
        printf("删除空格后的字符串为：%s\n",source);
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

void del_space(char * source)
{
	char target[50];
	int i,j;
    i=0;
    j=0;
	while(source[i]!='\0')
    {
		if(source[i]==' ')
			i++;
        else
        {
			target[j]=source[i];
            i++;
            j++;
        }
    }
    target[j]='\0';
    i=0;
	while(target[i]!='\0')
    {
		source[i]=target[i];
        i++;
    }
    source[i+1]='\0';
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
