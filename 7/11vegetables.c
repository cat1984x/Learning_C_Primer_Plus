#include <stdio.h>
#include <stdlib.h>

#define ATICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09

#define DISCOUNT 0.05

#define	SHIP_LESS_5_POUNDS 6.5
#define	SHIP_5_TO_20_POUNDS 14
#define	SHIP_MORE_20_PER_POUND 0.5

int main()
{
	char ch;
    double pound,vege_pounds[3],pounds_total,vege_frees[3],vege_total,ship,total,dis,vege_total_dis;
    double vege_prices[3]={ATICHOKE,BEET,CARROT};
    int i,j;
    
    //��ʼ������
    for(i=0;i<3;i++)//�������ܼ۳�ʼ��Ϊ0
    {
		vege_pounds[i]=0;
        vege_frees[i]=0;
    }
    pound=pounds_total=vege_total=ship=total=dis=vege_total_dis=0;//������ʼ��Ϊ0     
    
    
    //��������
	printf("��ӭ����ABC�ʹ��ӻ��꣡\n");
    printf("������ѡ����\na:��  b:���  c:���ܲ�  q:�˳�ѡ��\n");
	while((ch=getchar())!='q')
    {
		switch(ch)//ѡ���߲�
        {
			case 'a':
				printf("������ѡ���󼻰���\n");
                scanf("%lf",&pound);
                vege_pounds[0]+=pound;
                printf("����ѡ����%.2lf��\n",vege_pounds[0]);
                break;
			case 'b':
				printf("������ѡ����˰���\n");
                scanf("%lf",&pound);
                vege_pounds[1]+=pound;
                printf("����ѡ�����%.2lf��\n",vege_pounds[1]);
                break;                
			case 'c':
				printf("������ѡ�����ܲ�����\n");
                scanf("%lf",&pound);
                vege_pounds[2]+=pound;
                printf("����ѡ�����ܲ�%.2lf��\n",vege_pounds[2]);
                break;

        }
        //printf("�����Լ���ѡ����\na:��  b:���  c:���ܲ�  q:�˳�ѡ��\n");
    }
	
    //����۸�
    for(i=0;i<3;i++)
    {
		vege_frees[i]=vege_pounds[i]*vege_prices[i];//����ÿ���߲˼۸�
        pounds_total+=vege_pounds[i];//�����ܰ���
        vege_total+=vege_frees[i];//�����ܼ۸�
    }
    //�����ۿ�
    if(vege_total>=100)
    {
		dis=vege_total*DISCOUNT;
		vege_total_dis=vege_total-dis;
    }
    else
		vege_total_dis=vege_total;
    //�����˷�
    if(pounds_total<=5)
		ship=SHIP_LESS_5_POUNDS;
    else if(pounds_total>5&&pounds_total<=20)
		ship=SHIP_5_TO_20_POUNDS;
    else
		ship=SHIP_5_TO_20_POUNDS+(pounds_total-20)*SHIP_MORE_20_PER_POUND;
    
    //�����ܼ�
    total=vege_total_dis+ship;
    
    printf("���Ѿ�ѡ����\n");
	printf("��  %10.2fl��Ԫ/��%8.2fl��%8.2fl��Ԫ\n",vege_prices[0],vege_pounds[0],vege_frees[0]);
    printf("���  %10.2fl��Ԫ/��%8.2fl��%8.2fl��Ԫ\n",vege_prices[1],vege_pounds[1],vege_frees[1]);
    printf("���ܲ�%10.2fl��Ԫ/��%8.2fl��%8.2fl��Ԫ\n",vege_prices[2],vege_pounds[2],vege_frees[2]);
	printf("�������ܷ���%31.2fl��Ԫ\n",vege_total);
    if(vege_total>=100)
		printf("�ۿ�%39.2fl��Ԫ\n",-dis);
    printf("�˷ѺͰ�װ��%31.2fl��Ԫ\n",ship);
    printf("�ܷ���%37.2fl��Ԫ\n",total);
    
	system("pause");
	return 0;
}
