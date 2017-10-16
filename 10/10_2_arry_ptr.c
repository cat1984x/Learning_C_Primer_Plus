
#include <stdio.h>
#include <stdlib.h>
void copy_arr(double * target, const double * source, int length);
void copy_ptr(double * target, const double * source, int length);
void copy_ptrs(double * target, const double * source_begin, const double * source_end);
void print_arr(int length, const double ar[]);


int main()
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5], target2[5], target3[5];
	double * begin,* end;
	begin = source;
	end = source + 5;

	printf("Orign arr:\n");
	print_arr(5, source);

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);


	copy_ptrs(target3, begin,end);

	printf("arr1:\n");
	print_arr(5, target1);
	printf("arr2:\n");
	print_arr(5, target2);
	printf("arr3:\n");
	print_arr(5, target3);


	system("pause");
	return 0;
}

void copy_arr(double target[], const double source[], int length)
{
	int i;
	for (i = 0; i<length; i++)
		target[i] = source[i];

}

void copy_ptr(double * target, const double * source, int length)
{
	int i;
	for (i = 0; i<length; i++)
		*(target + i) = *(source + i);
}

void copy_ptrs(double * target,  const double * source_begin, const double * source_end)
{
	int i;
	for (i = 0; (source_begin + i)<source_end; i++)
		*(target + i) = *(source_begin + i);
}

void print_arr(int length, const double ar[])
{
	int i;
	for (i = 0; i<length; i++)
		printf("%5.2f", ar[i]);
	printf("\n");
}
