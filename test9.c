#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int i = 100;
    for (i = 100; i < 1000; i++)
    {
        int a = i / 100;//�����λ������
        int b = i % 100 / 10;//���ʮλ������
        int c = i % 10;//�����λ������
        int sum1 = a * a * a;
        int sum2 = b * b * b;
        int sum3 = c * c * c;
        if (sum1 + sum2 + sum3 == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}