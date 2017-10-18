#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i_num;
    float f_num;
    //printf("%d",sizeof(int));//int大小为4字节
    //printf("%d",sizeof(float));//float大小为4字节
    
    //i_num= 2147483648+1;//int上溢出,变为负数
    //printf("i_num=%d\n",i_num);
    
    //f_num=3.4e38*10;    //float上溢出，变为INF
    //printf("f_num=%e\n",f_num);
    
    f_num=0.123456e-39/10;    //float下溢出，丢失精度
    printf("f_num=%e\n",f_num);    
    
	system("pause");
	return 0;
}
