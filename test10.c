#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int weight, height;
	scanf("%d %d", &weight, &height);
	if (weight < 100 && height>64)
	
		if (height >= 72)
			printf("You are very tall for your weight..\n");
		else
			printf("You are tall for you weight.\n");
	else if (weight>300 && height<48)
			printf("You are quite short for you weight.\n");
	else
			printf("Your weight is ideal.\n");
	return 0;
}