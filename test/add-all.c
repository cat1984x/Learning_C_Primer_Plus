#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,sum,remain,last;
    sum=0;
    last=0;
    printf("������һ������\n"); 
    scanf("%d",&num);  
    printf("��������Ϊ%d\n",num);
	while(num>0||last>0)
    {
		last=num%10; 
        num=num/10;
        sum=sum+last;  
 
    }
    printf("��λ��Ϊ%d\n",sum);
    
	system("pause");
	return 0;
}
