#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,a,b,c;
    printf("请输入一个三位数\n"); 
    scanf("%d",&num);   
    while(num<100||num>999)
    {
		printf("请输入一个三位数\n"); 
        scanf("%d",&num); 
    }
    a=num/100;
    b=num%100/10;
    c=num%10;
    printf("各位和为%d\n",a+b+c);
    
	system("pause");
	return 0;
}
