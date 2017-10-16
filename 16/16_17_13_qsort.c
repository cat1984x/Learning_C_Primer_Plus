#include <stdio.h>
#include <stdlib.h>
#define NUM 100

void fill_array(int m[],int n);
int mycomp(const void * p1,const void * p2);
void print_array(const int m[],int n);

int main()
{
	int scores[NUM];
    fill_array(scores,NUM);    
    printf("排序前数组为：\n");
    print_array(scores,NUM);
	qsort(scores,NUM,sizeof(int),mycomp);
    printf("排序后数组为：\n");
    print_array(scores,NUM);
	system("pause");
	return 0;
}

void fill_array(int m[],int n)
{
	int i;
    for (i=0;i<n;i++)
		m[i]=rand();
}

int mycomp(const void * p1,const void * p2)
{
	const int * a1 = (const int *)p1;
	const int * a2 = (const int *)p2;
    if(*a1 > *a2)
		return -1;
    else if(*a1 == *a2)
		return 0;
    else
		return 1;
}

void print_array(const int m[],int n)
{
	int i;
    for (i=0;i<n;i++)
    {
		printf("%6d",m[i]);
        if(i%6==5)
			putchar('\n');
    }
    if (i%6!=0)
		putchar('\n');
}
