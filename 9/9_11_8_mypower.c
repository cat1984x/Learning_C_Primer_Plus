#include <stdio.h>
#include <stdlib.h>
double mypower(double base,int exp);
int main()
{
	double base;
    int exp;
	while(1)
    {
		puts("������������������ÿո����");
        scanf("%lf %d",&base,&exp);
        printf("%lg^%d=%lg\n",base,exp,mypower(base,exp));
    }
	system("pause");
	return 0;
}
double mypower(double base,int exp)
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
        {
			while(exp>0)
			{
            	pow*=base;
                exp--;
			}
        }
        else if(exp<0)
        {
			while(exp<0)
            {
				pow/=base;
                exp++;
            }
        }
        else
			pow*=1;
    }
    return pow;

}
