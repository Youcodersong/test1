#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int list[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		list[i] = 2 * i + 3;
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", list[j]);
		}
		printf("\n");
	}
	return 0;
}