#include <stdio.h>
#include <stdlib.h>
int main()
{
	float cm;
	float inch;
    float inch2cm =2.54;
    printf("����Ӣ�����\n");
    scanf("%f",&inch);
    printf("���������Ϊ%5.2f\n",inch*inch2cm);
	system("pause");
	return 0;
}
