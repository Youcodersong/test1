#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	char arr[5] = { 0 };
	for (i = 0; i <5; i++)
	{
		int j = 0;
		arr[i] = '$';
		for (j = 0; j <=i; j++)
		{
			printf("%c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}