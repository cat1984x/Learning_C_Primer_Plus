#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i_num;
    float f_num;
    //printf("%d",sizeof(int));//int��СΪ4�ֽ�
    //printf("%d",sizeof(float));//float��СΪ4�ֽ�
    
    //i_num= 2147483648+1;//int�����,��Ϊ����
    //printf("i_num=%d\n",i_num);
    
    //f_num=3.4e38*10;    //float���������ΪINF
    //printf("f_num=%e\n",f_num);
    
    f_num=0.123456e-39/10;    //float���������ʧ����
    printf("f_num=%e\n",f_num);    
    
	system("pause");
	return 0;
}
