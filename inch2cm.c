#include <stdio.h>
#include <stdlib.h>
int main()
{
	float cm;
	float inch;
    float inch2cm =2.54;
    printf("输入英寸身高\n");
    scanf("%f",&inch);
    printf("身高厘米数为%5.2f\n",inch*inch2cm);
	system("pause");
	return 0;
}
