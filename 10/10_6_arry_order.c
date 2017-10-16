#include <stdio.h>
#include <stdlib.h>

void reverse_order(double ar[],int len);
void print_arr(int length, const double ar[]);


int main()
{
	double arry[]={8.5,2.2,7.5,5.6,9.6,5.6,1.2};
    int len = sizeof(arry)/sizeof(arry[0]);
    printf("Orign arr:\n");
	print_arr(len, arry);
    
    reverse_order(arry,len);
    printf("After reverse order:\n"); 
	print_arr(len, arry);    
    
	system("pause");
	return 0;
}

void reverse_order(double ar[],int len)
{
	int i,j;
    double tmp;
	for(i=0;i<len-1;i++)
		for(j=i+1;j<len;j++)
		{
			if(ar[i]<ar[j])
			{
				tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
}


void print_arr(int length, const double ar[])
{
	int i;
	for (i = 0; i<length; i++)
		printf("%5.2f", ar[i]);
	printf("\n");
}
