#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define rate_min 0.15
#define rate_max 0.28
#define unmarry  17850.0
#define household 23900.0
#define married_together 29750.0
#define married_leaved  14875.0
void menu()
{
	printf("***********************************************\n");
	printf("***1.unmarried***************2.householder*****\n");
	printf("***3.married_together********4.married_leaved**\n");
	printf("*******************5.quit**********************\n");
	printf("***********************************************\n");
}
int main()
{
	double salary;
	int selected;
	double rate;
	do
	{
		menu();
		printf("请选择您纳税的种类：");
		scanf("%d",&selected);
		switch (selected)
		{
		case 1:
			printf("请输入您的工资：");
			scanf("%lf", &salary);
			if (salary <= unmarry && salary > 0)
			{
				rate = salary * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			else
			{
				rate = (salary - unmarry) * rate_max + unmarry * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			break;
		case 2:
			printf("请输入您的工资：");
			scanf("%lf", &salary);
			if (salary <= household && salary > 0)
			{
				rate = salary * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			else
			{
				rate = (salary - household) * rate_max + household * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			break;
		case 3:
			printf("请输入您的工资：");
			scanf("%lf", &salary);
			if (salary <= married_together && salary > 0)
			{
				rate = salary * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			else
			{
				rate = (salary - married_together) * rate_max + married_together * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			break;
		case 4:
			printf("请输入您的工资：");
			scanf("%lf", &salary);
			if (salary <= married_leaved && salary > 0)
			{
				rate = salary * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			else
			{
				rate = (salary - married_leaved) * rate_max + married_leaved * rate_min;
				printf("您应缴的税额是%.3f\n", rate);
			}
			break;
		case 5:
			printf("quit\n");
			break;
		default:
			printf("Please enter correct number.");
			break;
		}
	} while (selected != 5);
	return 0;
}