#include <stdio.h>
#include <stdlib.h>
double MyPower(double base,int exp);
int main()
{
	double base;
    int exp;
	while(1)
    {
		puts("������������������ÿո����");
        scanf("%lf %d",&base,&exp);
        printf("%lg^%d=%lg\n",base,exp,MyPower(base,exp));
    }
	system("pause");
	return 0;
}
double MyPower(double base,int exp)
{
	double pow=1;
	if(base==0)
    {
		if(exp==0)
			printf("0��0����δ����\n");
		else
			pow=0;
    }
    else
    {
		if(exp>0)
			pow=MyPower(base,exp-1)*base;
        else if(exp<0)
			pow=MyPower(base,exp+1)/base;
        else
			pow=1;
    }
    return pow;

}
