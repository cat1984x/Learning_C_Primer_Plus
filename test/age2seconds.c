#include <stdio.h>
#include <stdlib.h>
int main()
{
	int age;
    float year2seconds = 3.156e7;
    printf("输入你的年龄\n");  
    scanf("%d",&age);
    printf("你已经活了%lld秒\n",age*year2seconds);//直接输出数据格式不匹配
    printf("你已经活了%e秒\n",age*year2seconds);
    printf("你已经活了%Lf秒\n",age*year2seconds);
	system("pause");
	return 0;
}
