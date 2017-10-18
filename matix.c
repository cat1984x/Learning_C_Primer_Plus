#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
    int a[3][4]={1,2,4,5,6};
    for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
    }
	system("pause");
	return 0;
}
