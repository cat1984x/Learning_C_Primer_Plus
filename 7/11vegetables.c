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
    
    //初始化参数
    for(i=0;i<3;i++)//重量、总价初始化为0
    {
		vege_pounds[i]=0;
        vege_frees[i]=0;
    }
    pound=pounds_total=vege_total=ship=total=dis=vege_total_dis=0;//参数初始化为0     
    
    
    //订购程序
	printf("欢迎来到ABC邮购杂货店！\n");
    printf("您可以选购：\na:洋蓟  b:甜菜  c:胡萝卜  q:退出选购\n");
	while((ch=getchar())!='q')
    {
		switch(ch)//选购蔬菜
        {
			case 'a':
				printf("请输入选购洋蓟磅数\n");
                scanf("%lf",&pound);
                vege_pounds[0]+=pound;
                printf("您已选购洋蓟%.2lf磅\n",vege_pounds[0]);
                break;
			case 'b':
				printf("请输入选购甜菜磅数\n");
                scanf("%lf",&pound);
                vege_pounds[1]+=pound;
                printf("您已选购甜菜%.2lf磅\n",vege_pounds[1]);
                break;                
			case 'c':
				printf("请输入选购胡萝卜磅数\n");
                scanf("%lf",&pound);
                vege_pounds[2]+=pound;
                printf("您已选购胡萝卜%.2lf磅\n",vege_pounds[2]);
                break;

        }
        //printf("您可以继续选购：\na:洋蓟  b:甜菜  c:胡萝卜  q:退出选购\n");
    }
	
    //计算价格
    for(i=0;i<3;i++)
    {
		vege_frees[i]=vege_pounds[i]*vege_prices[i];//计算每种蔬菜价格
        pounds_total+=vege_pounds[i];//计算总磅数
        vege_total+=vege_frees[i];//计算总价格
    }
    //计算折扣
    if(vege_total>=100)
    {
		dis=vege_total*DISCOUNT;
		vege_total_dis=vege_total-dis;
    }
    else
		vege_total_dis=vege_total;
    //计算运费
    if(pounds_total<=5)
		ship=SHIP_LESS_5_POUNDS;
    else if(pounds_total>5&&pounds_total<=20)
		ship=SHIP_5_TO_20_POUNDS;
    else
		ship=SHIP_5_TO_20_POUNDS+(pounds_total-20)*SHIP_MORE_20_PER_POUND;
    
    //计算总价
    total=vege_total_dis+ship;
    
    printf("您已经选购：\n");
	printf("洋蓟  %10.2fl美元/磅%8.2fl磅%8.2fl美元\n",vege_prices[0],vege_pounds[0],vege_frees[0]);
    printf("甜菜  %10.2fl美元/磅%8.2fl磅%8.2fl美元\n",vege_prices[1],vege_pounds[1],vege_frees[1]);
    printf("胡萝卜%10.2fl美元/磅%8.2fl磅%8.2fl美元\n",vege_prices[2],vege_pounds[2],vege_frees[2]);
	printf("订单的总费用%31.2fl美元\n",vege_total);
    if(vege_total>=100)
		printf("折扣%39.2fl美元\n",-dis);
    printf("运费和包装费%31.2fl美元\n",ship);
    printf("总费用%37.2fl美元\n",total);
    
	system("pause");
	return 0;
}
