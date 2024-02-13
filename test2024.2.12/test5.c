#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	float x, y = 0;//声明两个变量
	printf("请输入两个小数:");
	while (scanf("%f %f", &x, &y) == 2) //判断输入的浮点数是否是两个
	{
		printf("计算的结果是%f\n", (x - y) / (x * y));
	} 
	printf("请输入正确的小数!!!\n");
	return 0;
}