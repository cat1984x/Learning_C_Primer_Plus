#include <stdio.h>
#include <stdlib.h>
#define PR_DATE

int main()
{
	#ifdef PR_DATE
		printf("Date=%s\n",__DATE__);
    #endif
	system("pause");
	return 0;
}
