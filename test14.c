#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

// 
// Do not modify the code here
int is_prime(int x)
{
    if (x == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int prime_sum(int m, int n)
{
    // Write your code here
    m = m + n;
    return m;
}


int main()
{
    // Write your code here
    int num1, num2 , c = 0;
    scanf("%d %d", &num1, &num2);
    for (int i = num1; i < num2; i++)
    {
        if (is_prime(i) == 1)
        {
            c = prime_sum(c, i);
        }
        
    }
    printf("%d", c);
    return 0;
}