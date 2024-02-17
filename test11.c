#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define basic_salary  10.0
#define overtime  1.5
#define rate_min 0.15
#define rate_mid  0.2
#define rate_max  0.25
#define  num1 300
#define  num2 150
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
		sum = basic_salary * hours;
		rate = 0;
		salary = sum - rate;
		printf("×ÜÊÕÈëÊÇ%.3f£¬Ë°ÂÊÊÇ%.3f£¬¾»ÊÕÈëÊÇ%.3f", sum, rate, salary);
	}
	else if (hours >= 30 && hours < 40)
	{
		if (sum - num1 > 0)
		{
			sum = basic_salary * hours;
			rate = (sum - num1) * rate_mid + num1 * rate_min;
			salary = sum - rate;
			printf("×ÜÊÕÈëÊÇ%.3f£¬Ë°ÂÊÊÇ%.3f£¬¾»ÊÕÈëÊÇ%.3f", sum, rate, salary);
		}
		else if (sum - num1 <= 0)
		{
			sum = basic_salary * hours;
			rate = num1 * rate_min;
			salary = sum - rate;
			printf("×ÜÊÕÈëÊÇ%.3f£¬Ë°ÂÊÊÇ%.3f£¬¾»ÊÕÈëÊÇ%.3f", sum, rate, salary);
		}
	}
	else if (hours > 40)
	{
		hours = (hours-40) * overtime;
		sum = (40 + hours)*basic_salary;
		if (sum - num1 <= num2)
		{
			rate = num1 * rate_min + (sum - num1) * rate_mid;
			salary = sum - rate;
			printf("×ÜÊÕÈëÊÇ%.3f£¬Ë°ÂÊÊÇ%.3f£¬¾»ÊÕÈëÊÇ%.3f", sum, rate, salary);
		}
		else 
		{
			rate = num1 * rate_min + (sum - num1) * rate_mid + (sum - 450) * rate_max;
			salary = sum - rate;
			printf("×ÜÊÕÈëÊÇ%.3f£¬Ë°ÂÊÊÇ%.3f£¬¾»ÊÕÈëÊÇ%.3f", sum, rate, salary);
		}
	}
	return 0;
}