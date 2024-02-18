#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define basic_salary  10.0
#define overtime  1.5
#define rate_min 0.15
#define rate_mid  0.2
#define rate_max  0.25
#define  num1 300.0
#define  num2 150.0
int main()
{
	float sum = 0;
	float rate = 0;
	float salary = 0;
	float hours = 0;
	printf("Enter the working hours a week:");
	scanf("%f",&hours);
	if (hours < 30)
	{
		sum =(float)( basic_salary * hours);
		rate = 0;
		salary =(float)(sum - rate);
		printf("总收入是%.3f，税率是%.3f，净收入是%.3f", sum, rate, salary);
	}
	else if (hours >= 30 && hours < 40)
	{
		if (sum - num1 > 0)
		{
			sum =(float)(basic_salary * hours);
			rate = (float)((sum - num1) * rate_mid + num1 * rate_min);
			salary =(float)(sum - rate);
			printf("总收入是%.3f，税率是%.3f，净收入是%.3f", sum, rate, salary);
		}
		else if (sum - num1 <= 0)
		{
			sum =(float)(basic_salary * hours);
			rate =(float)(num1 * rate_min);
			salary = (float)(sum - rate);
			printf("总收入是%.3f，税率是%.3f，净收入是%.3f", sum, rate, salary);
		}
	}
	else if (hours > 40)
	{
		hours =(float)((hours-40) * overtime);
		sum = (float)((40 + hours)*basic_salary);
		if (sum - num1 <= num2)
		{
			rate = (float)(num1 * rate_min + (sum - num1) * rate_mid);
			salary = (float)(sum - rate);
			printf("总收入是%.3f，税率是%.3f，净收入是%.3f", sum, rate, salary);
		}
		else 
		{
			rate = (float)(num1 * rate_min + (sum - num1) * rate_mid + (sum - 450) * rate_max);
			salary =(float)(sum - rate);
			printf("总收入是%.3f，税率是%.3f，净收入是%.3f", sum, rate, salary);
		}
	}
	return 0;
}
