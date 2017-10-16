#include <stdio.h>
int check_alpha(int ch);
int main(void)
{
    int ch;
	while(scanf("%c",&ch)!=EOF)
    {
		printf("%d\n",check_alpha(ch));
    }
	system("pause");
	return 0;
}

int check_alpha(int ch)
{	
    int back;
	if(isalpha(ch))
		back=tolower(ch)-96;            
    else
		back=-1;
    return back;          
}
