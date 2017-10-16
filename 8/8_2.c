#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch;
    //void printchar(int ch);
     
    void printchar(int ch)
	{
		if(ch>=0&&ch<=31)
        {
			if(ch=='\n')
				printf("    \\n,%3d   ",ch); 
            else if(ch=='\h')
				printf("    \\h,%3d   ",ch); 
            else
				printf("Ctrl+%c,%3d   ",ch+64,ch);         
        }
        else
			printf("%6c,%3d   ",ch,ch); 
    }
    
    
    for(ch=0;ch<=127;ch++)
	{
        printchar(ch);
        if(ch%10==9)
			printf("\n");
    }
    system("pause");
	return 0;
}
