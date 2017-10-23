#include <stdio.h>
#include <stdlib.h>

void getword(char *p);

int main()
{
	char word[40];
    while(1)
    {
		getword(word);
		puts(word);
    }
	system("pause");
	return 0;
}

void getword(char *p)
{
    *p = getchar();
	while(isspace(*p))
		*p = getchar();
	while(!isspace(*p))
    {
		p++;
        *p = getchar();
    }
	*p = '\0';
    while(getchar()!='\n')
		continue;
}
