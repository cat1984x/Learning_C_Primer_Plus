#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch,count;
    count=0;
	while((ch=getchar())!=EOF)
		count++;
    printf("�ַ�����Ϊ%d",count);
	return 0;
}
