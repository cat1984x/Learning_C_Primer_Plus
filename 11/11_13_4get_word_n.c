#include <stdio.h>
#include <stdlib.h>

void getword_n(char *p,int n);

int main()
{
	char word[40];
    while(1)
    {
		getword_n(word,5);
		puts(word);
    }
	system("pause");
	return 0;
}

void getword_n(char *p,int n)
{
	int i=0;
    *p = getchar();
	while(isspace(*p))
		*p = getchar();
	while(!isspace(*p)&&i<n)
    {
		p++;
        i++;
        *p = getchar();
    }
	*p = '\0';
    while(getchar()!='\n')
		continue;
}
