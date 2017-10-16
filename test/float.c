#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num;
    printf("请输入一个浮点数\n");
    scanf("%f",&num);
    printf("输入的浮点数小数形式为%f\n",num);
    printf("输入的浮点数指数形式为%e\n",num);
    printf("输入的浮点数p形式为%a\n",num);
    
	system("pause");
	return 0;
}
