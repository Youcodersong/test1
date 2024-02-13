#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int function1(char a, char b)
{
    if (a < b) 
    {
        return -1;
    }
    else if (a > b) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



char function2(char a, char b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    printf("%d\n", function1(a, b));
    printf("%c\n", function2(a, b));
    return 0;
}