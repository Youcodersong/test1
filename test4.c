#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[25];
	scanf("%s",arr);//¶ÁÈ¡µ¥´Ê
	int len=(int)strlen(arr);
	int i = len-1;
	int j = 0;
	for (i = len-1,j=0; i>=0&&j<=i ; i--,j++)
	{
		char word=arr[i];
		arr[i] = arr[j];
		arr[j] = word;
	}
	printf("%s", arr);
	return 0;
}