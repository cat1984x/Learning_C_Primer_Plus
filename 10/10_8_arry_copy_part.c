#include <stdio.h>
#include <stdlib.h>
int main()
{
	double source[]={8.5,2.2,7.5,5.6,9.6,5.6,1.2};
    double part[3]={0};
    double * ptr = source;
    printf("Orign arr:\n");
	print_arr(7, source);       
   
    copy_arr(part,(ptr+2),3);    
    printf("part arr:\n");
    print_arr(3, part);
    
	system("pause");
	return 0;
}

void copy_arr(double target[], const double  source[], int length)
{
	int i;
	for (i = 0; i<length; i++)
    target[i] = source[i];
}

void print_arr(int length, const double ar[])
{
	int i;
	for (i = 0; i<length; i++)
		printf("%5.2f", ar[i]);
	printf("\n");
}
