#include <stdio.h>
#include <stdlib.h>
int main()
{
	int age;
    float year2seconds = 3.156e7;
    printf("�����������\n");  
    scanf("%d",&age);
    printf("���Ѿ�����%lld��\n",age*year2seconds);//ֱ��������ݸ�ʽ��ƥ��
    printf("���Ѿ�����%e��\n",age*year2seconds);
    printf("���Ѿ�����%Lf��\n",age*year2seconds);
	system("pause");
	return 0;
}
