#include <stdio.h>
#include <stdlib.h>
int main()
{
	float moleculeNumber;
    float moleculeWeight=3.0e-23;
	int quart;
    int quart2gram =950;
    printf("输入水的夸脱\n");
    scanf("%d",&quart);
    moleculeNumber =quart*quart2gram/moleculeWeight;
    printf("水的分子数%e\n",moleculeNumber);
	system("pause");
	return 0;
}
