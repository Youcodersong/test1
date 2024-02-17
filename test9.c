#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int i = 100;
    for (i = 100; i < 1000; i++)
    {
        int a = i / 100;//求出百位的数字
        int b = i % 100 / 10;//求出十位的数字
        int c = i % 10;//求出个位的数字
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