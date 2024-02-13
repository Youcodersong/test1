#define _CRT_SECURE_NO_WARNINGS 1
#include"Add.h"
int main()
{
	float a = 0;
	float b = 0;
	printf("Enter lower and upper integer limits:");
	while (scanf("%f %f", &a, &b) == 2)
	{
		float sum=Add(&a,&b);
		printf("The sum of squares from %f to %f is %f\n", a*a, b*b,sum);
	}
	printf("Done\n");

	return 0;
}