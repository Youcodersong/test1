#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a = 'A';
	for (int i = 1; i<=6;i++)
	{
		int j;
		for (j = 0; j <i; j++,a++)
		{
			printf("%c",a);
		}

		printf("\n");
	}
	return 0;
}