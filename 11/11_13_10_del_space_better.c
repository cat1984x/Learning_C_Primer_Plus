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
		puts("�������ַ�����");
		s_gets(source,50);
        del_space(source);
        printf("ɾ���ո����ַ���Ϊ��%s\n",source);
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

void del_space(char * source)
{

	char * p1,* p2;
    p1=source;
	while(*p1!='\0')
    {
		if(*p1==' ')
        {
			p2=p1;
			while(*p2!='\0')
            {
				*p2=*(p2+1);
                p2++;
            }
            p1--;
        }
        p1++;
    }

}

void delspace(char *p1)
{
 char *p2;
 while (*p1 != '\0' )
 {
  if (*p1 == ' ')
  {
   p2 = p1;
   while(*p2 != '\0')
   {
    *p2 = *(p2+1);
    p2++;
   }
   p1--; //���������p1++
  }
  p1++;
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
