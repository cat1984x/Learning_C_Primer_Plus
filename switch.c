#include <stdio.h>

int main()
{	
    char ch;
    while((ch=getchar())!='#')
    {
		switch(ch)
        {
        case '\n':
				break;
        case 'c':
				printf("Step 1\n");
                break;
        case 'b':
				printf("Step 1\n");
                break;
        case 'h':
				printf("Step 1\n");
				printf("Step 3\n");				
                break;
        default:
				printf("Step 1\n");
                printf("Step 2\n");
                printf("Step 3\n");
                break;
        }
		if(ch=='b')
			break;
    }
	printf("Done\n");	
	
	system("pause");
	return 0;
}
