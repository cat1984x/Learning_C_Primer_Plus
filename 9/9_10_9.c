#include <stdio.h>
#include <stdlib.h>
void choice(void);
int get_int(int min,int max);

int main()
{
	const int min=1;
    const int max=4;
	choice();
    printf("%d\n",get_int(min,max));
	system("pause");
	return 0;
}

void choice(void)
{
	printf("Please choose one of the following:\n");
    printf("1)copy files\t\t2)move files\n");
    printf("3)remove files\t\t4)quit\n");
    printf("Enter the number of your choice:");
}

int get_int(int min,int max)
{
	int num,code,back;
    if((code=scanf("%d",&num))==1)
	{
		if(num<min||num>max)
		{
			choice();
            back=get_int(min,max);
        }
        else
			back=num;          
    }
    else
		back=4;
    return back; 
}
