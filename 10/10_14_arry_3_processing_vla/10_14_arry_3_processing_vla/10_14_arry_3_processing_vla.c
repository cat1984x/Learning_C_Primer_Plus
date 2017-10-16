#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5
void get_arry(int rows,int cols,double ar[rows][cols]);
double mean_1d(int len,double ar[]);
double mean_2d(int len,double ar[][COLS]);
double max_2d(int len,double ar[][COLS]);
void print_1d(int len, const double ar[]);
void print_2d(int len, const double ar[][COLS]);
void copy_1d(int len, double target[], const double source[]);
void copy_2d(int len, double target[][COLS], const double source[][COLS]);


int main()
{

    //double ar[ROWS][COLS];
    double mean_rows[ROWS];
    double mean_all;
    double max_all;   
    int i; 
    int rows,cols;
	double ar[rows][cols];

    
    double source[ROWS][COLS]={{1.2,2.3,3.2,4.2,5.2},
						   {4,5,6,7,8},
						   {10,2.1,0.2,3.2,0.1}};
	rows = 3;
	cols = 5;

    //输入数组
    //get_arry(ar);
    printf("你输入的数组为：\n");
    print_2d(ROWS,ar);
    
    //计算每组平均值
    for(i=0;i<ROWS;i++)
		mean_rows[i]=mean_1d(COLS,ar[i]);
    printf("每组数的平均值为：\n");
	print_1d(ROWS,mean_rows);
    
    //计算所有数据平均值
    mean_all=mean_2d(ROWS,ar);
    printf("所有数据的平均值为：%g\n",mean_all);

    //计算所有数据最大值
    max_all=max_2d(ROWS,ar);
    printf("所有数据的最大值为：%g\n",max_all);    
        
	system("pause");
	return 0;
}

void get_arry(int rows,int cols,double ar[rows][cols])
{
	int i;
	printf("请输入%d组数，每组%d个double数\n",ROWS,COLS);
    for(i=0;i<rows;i++)
	{
		printf("请输入第%d组double数，共%d个，使用用空格隔开\n",i+1,cols);
        scanf("%lf %lf %lf %lf %lf",ar[i],ar[i]+1,ar[i]+2,ar[i]+3,ar[i]+4);
    }
}

double mean_1d(int len,double ar[])
{
	int i;
    double sum,mean;
    sum=0;
	for (i = 0; i<len; i++)
		sum+=ar[i];
    mean=sum/len;
    return mean;
}

double mean_2d(int len,double ar[][COLS])
{
	int i;
    double sum,mean;
    sum=0;
	for (i = 0; i<len; i++)
		sum+=mean_1d(COLS,ar[i]);
    mean=sum/len;
    return mean;	
}

double max_2d(int len,double ar[][COLS])
{
	int i,j;
    float max;
    for(i=0,max=ar[0][0];i<len;i++)
		for(j=0;j<COLS;j++)
			if(ar[i][j]>max)
				max=ar[i][j];
    return max;
}

void print_1d(int len, const double ar[])
{
	int i;
	for (i = 0; i<len; i++)
		printf("%-8g", ar[i]);
	printf("\n");
}

void print_2d(int len, const double ar[][COLS])
{
	int i;
	for (i = 0; i<len; i++)
		print_1d(COLS,ar[i]);
	printf("\n");
}

void copy_1d(int len,double target[], const double source[])
{
	int i;
	for (i = 0; i<len; i++)
		target[i] = source[i];

}

void copy_2d(int len,double target[][COLS], const double source[][COLS])
{
	int i, len_1d;
	//len=2;
	len_1d = sizeof(source[0]) / sizeof(source[0][0]);
	for (i = 0; i<len; i++)
		copy_arr(target[i], source[i], len_1d);

}