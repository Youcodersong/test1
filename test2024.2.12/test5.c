#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	float x, y = 0;//������������
	printf("����������С��:");
	while (scanf("%f %f", &x, &y) == 2) //�ж�����ĸ������Ƿ�������
	{
		printf("����Ľ����%f\n", (x - y) / (x * y));
	} 
	printf("��������ȷ��С��!!!\n");
	return 0;
}