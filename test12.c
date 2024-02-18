#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define basic_salary1 8.75
#define basic_salary2 9.33
#define basic_salary3 10.00
#define basic_salary4 11.20
#define overtime  1.5
#define rate_min 0.15
#define rate_mid  0.2
#define rate_max  0.25
#define  num1 300
#define  num2 150
void menu()
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                                           2) $9.33/hr\n");
	printf("3) $10.00/hr                                         4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
}
void carry_rate(double basicsalary, float hours)
{
	float sum = 0;
	float rate = 0;
	float salary = 0;
	if (hours <= 30)
	{
		sum = (float)(hours * basicsalary);
		rate = (float)(sum * rate_min);
		salary = sum - rate;
		printf("总收入是%.3f，税率是%.3f，净收入是%.3f", sum, rate, salary);
	}
	else if (hours <= 40)
	{
		sum =(float)(hours * basicsalary);
		if (sum < num1)
		{
			rate =(float)(sum * rate_min);
			salary = sum - rate;
			printf("总收入是$%.3f，税率是$%.3f，净收入是$%.3f", sum, rate, salary);
		}
		else 
		{
			rate = (float)(num1 * rate_min+(sum-num1)*rate_mid);
			salary = sum - rate;
			printf("总收入是$%.3f，税率是4%.3f，净收入是￥%.3f", sum, rate, salary);
		}
	}
	else
	{
		hours = (float)((hours - 40) * overtime + 40);
		sum = (float)(hours * basicsalary);
		if (sum - num1 < num2)
		{
			rate =(float)(num1* rate_min+(sum-num1)*rate_mid);
			salary = sum - rate;
			printf("总收入是$%.3f，税率是$%.3f，净收入是$%.3f", sum, rate, salary);
		}
		else if(sum>num1+num2)
		{
			rate =(float)(num1* rate_min+num2*rate_mid+(sum-num1-num2)*rate_max);
			salary = sum - rate;
			printf("总收入是$%.3f，税率是$%.3f，净收入是$%.3f", sum, rate, salary);
		}
	}
}
int main()
{
	int select;
    float hours;
	do
	{
		menu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("Enter the working hours a week:");
			scanf("%f", &hours);
			carry_rate(basic_salary1,hours);
			break;
		case 2:
			printf("Enter the working hours a week:");
			scanf("%f", &hours);
			carry_rate(basic_salary2, hours);
			break;
		case 3:
			printf("Enter the working hours a week:");
			scanf("%f", &hours);
			carry_rate(basic_salary3, hours);
			break;
		case 4:
			printf("Enter the working hours a week:");
			scanf("%f", &hours);
			carry_rate(basic_salary4, hours);
			break;
		case 5:
			printf("quit\n");
			break;
		default:
			printf("请输入正确的序号.\n");
			break;
		}
	} while (select!=5);
	return 0;
}