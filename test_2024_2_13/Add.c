#include<stdio.h>
float Add(float* x, float* y)
{
	float z;
	float sum1 = 0;
	while (*x <= *y)
	{
		z = (*x) * (*x);
		sum1 += z;
		(*x)++;
	}
	return sum1;
}