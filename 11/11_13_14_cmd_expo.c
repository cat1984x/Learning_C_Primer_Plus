#include <stdio.h>
#include <stdlib.h>
double mypower(double base,int exp);
int main(int argc,char * argv[])
{
	double base;
    int exp;
    char * end;
    base=strtod(argv[1],&end);
	exp=atoi(argv[2]);     
    printf("%g^%d=%g\n",base,exp,mypower(base,exp));    
    system("pause");
	return 0;
}
double mypower(double base,int exp)
{
	double pow=1;
	if(base==0)
    {
		if(exp==0)
			printf("0的0次幂未定义\n");
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
