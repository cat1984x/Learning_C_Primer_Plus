#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,a,b,c;
    printf("������һ����λ��\n"); 
    scanf("%d",&num);   
    while(num<100||num>999)
    {
		printf("������һ����λ��\n"); 
        scanf("%d",&num); 
    }
    a=num/100;
    b=num%100/10;
    c=num%10;
    printf("��λ��Ϊ%d\n",a+b+c);
    
	system("pause");
	return 0;
}
