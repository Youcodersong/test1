#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print_n_times_hello(int x);
void print_hello();

int main()
{
    int n = 0;
    scanf("%d", &n);
    print_n_times_hello(n);
}

void print_n_times_hello(int x)
{
    int j = 1;
    for (j = 1; j <= x; j++)
        print_hello();
}
void print_hello()
{
    printf("Hello LintCode\n");
    return;
}