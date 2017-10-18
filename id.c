#include <stdio.h>

int main()
{	
    char ch;
    while((ch=getchar())!='#')
    {
		if(ch=='\n')
        ;
        else
			{
				printf("Step 1\n");
                if(ch=='c')
                ;
                else 
                {
					if(ch=='b')
						break;
					else if(ch=='h')
					;
					else
						printf("Step 2\n");
					printf("Step 3\n"); 
                }
            }
    }
	printf("Done\n");	
	
	system("pause");
	return 0;
}
