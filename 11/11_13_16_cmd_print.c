#include <stdio.h>
#include <stdlib.h>
void ToUpper(char * source,char * print);
void ToLower(char * source,char * print);

int main(int argc,char * argv[])
{	
    char article[1000],print[1000];
    puts("请输入文章，ctrl+z结束");
	fgets(article,1000,stdin);
    if(argc>1)
    {		
		if(strcmp(argv[1],"-p")==0)
			printf(article);
        else if(strcmp(argv[1],"-u")==0)
        {
            ToUpper(article,print);
            printf(print);
        }
        else if(strcmp(argv[1],"-l")==0)
        {
            ToLower(article,print);
            printf(print);      
        }
        else
			puts("命令行参数错误，请使用-p,-u,-l");
    }
    else
		printf(article);
	system("pause");
	return 0;
}

void ToUpper(char * source,char * print)
{
    int i=0;
    while(source[i]!='\0')
	{
		print[i]=toupper(source[i]);
        i++;
    }
    print[i]='\0';
}

void ToLower(char * source,char * print)
{
    int i=0;
    while(source[i]!='\0')
	{
		print[i]=tolower(source[i]);
        i++;
    }
    print[i]='\0';
}
