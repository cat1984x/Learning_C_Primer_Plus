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
		puts("�������ַ�����");
		s_gets(st,50);
		puts("������Ҫ���ҵ��ַ���");
		scanf("%c",&ch);
        while(getchar()!='\n')
			continue;
		if(is_within(st,ch))
			printf("�ַ�%c��%s�С�\n",ch,st);
		else
			printf("�ַ�%c����%s�С�\n",ch,st);
        puts("���������ַ�����������q�˳�");
		scanf("%c",&ch);        
        while(getchar()!='\n')
			continue;
    }
    while(ch!='q');
    puts("ллʹ��");
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
