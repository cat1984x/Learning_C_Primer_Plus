#include <stdio.h>
#include <stdlib.h>
int get_first(void);     
    


int main()
{    
    int choice;
    choice=get_choice();
	while(choice!='q')
    {
		switch(choice)
		{
			case 'a':add();
					break;
			case 's':subtract();
					break;
			case 'm':multiply();
					break;
			case 'd':divide();
					break;
        }  
        choice=get_choice();
    }    
    printf("Bye.\n");    
    
	system("pause");
	return 0;
}

    int get_first(void) 
	{
		int ch;
        ch=getchar();        
        while(getchar()!='\n')
			continue;
        return ch;
    }
    int get_choice(void)
    {   
        int ch; 
        printf("Enter the operation of your choice:\n");
		printf("a.add\t\ts.subtract\n");
		printf("m.multiply\td.divide\n");
		printf("q.quit\n");
        ch=get_first();
		while(ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'&&ch!='q')
		{
			printf("%c is not vaild option.Please choose with a,s,m,d,q.\n",ch);
			ch=get_first();    
		}
        return ch;    
    }
    
float get_float(void)
{
	float num;
    int ch;
    while(scanf("%f",&num)!=1)
	{
		while((ch=getchar())!='\n')
			putchar(ch);
        printf("is not an number.\n");
        printf("Please enter a number, such as 2.5,-1.78E8, or 3: ");        
    }
    while(getchar()!='\n')//清理读取数字后的\n，为下次读取字符做好准备。
		continue;
    return num;
}    
    
    
void add(void)
{
	float a,b;
	printf("Enter first number:");
    a=get_float();
    printf("Enter second number:");
    b=get_float();
    printf("%g + %g = %g\n",a,b,a+b);
} 

void subtract(void)
{
	float a,b;
	printf("Enter first number:");
    a=get_float();
    printf("Enter second number:");
    b=get_float();
    printf("%g - %g = %g\n",a,b,a-b);
} 

void multiply(void)
{
	float a,b;
	printf("Enter first number:");
    a=get_float();
    printf("Enter second number:");
    b=get_float();
    printf("%g * %g = %g\n",a,b,a*b);

} 

void divide(void)
{
	float a,b;
	printf("Enter first number:");
    a=get_float();
    printf("Enter second number:");
    b=get_float();
    while(b==0)
    {
		printf("Can't divided by zero.Please enter another number.\n");
        b=get_float();
    }
    printf("%g / %g = %g\n",a,b,a/b);
}     
