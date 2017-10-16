#include <stdio.h>
#include <stdlib.h>
int main()
{
	double source[4][2]={8.5,2.2,7.5,5.6,9.6,5.6,1.2};
    double target[4][2];
    int i,j;
		
    printf("Orign arr:\n");
	for(i=0;i<4;i++)
	{
        for(j=0;j<2;j++)
			printf("%5.2f",source[i][j]);
        printf("\n");
    }   
    copy_2d_arr(target,source,4);
    
    printf("arr2:\n");
	for(i=0;i<4;i++)
	{
        for(j=0;j<2;j++)
			printf("%5.2f",target[i][j]);
        printf("\n");
    } 
    
	system("pause");
	return 0;
}

void copy_arr(double target[], const double source[], int length)
{
	int i;
	for (i = 0; i<length; i++)
		target[i] = source[i];

}

void copy_2d_arr(double target[][2], const double source[][2], int length)
{
	int i,len;
    //len=2;
    len=sizeof(source[0])/sizeof(source[0][0]);
    printf("%d\n",len);
    for (i = 0; i<length; i++)
		copy_arr(target[i],source[i],len);

}

