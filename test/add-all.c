#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,sum,remain,last;
    sum=0;
    last=0;
    printf("请输入一个数字\n"); 
    scanf("%d",&num);  
    printf("输入数字为%d\n",num);
	while(num>0||last>0)
    {
		last=num%10; 
        num=num/10;
        sum=sum+last;  
 
    }
    printf("各位和为%d\n",sum);
    
	system("pause");
	return 0;
}
