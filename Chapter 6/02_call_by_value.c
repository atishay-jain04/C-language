#include <stdio.h>

int sum(int a, int b);

int main()
{
    int x = 5, y = 7;
    printf("the value of x and y is %d and %d\n",x,y);
    printf("the value of 5+7 is %d\n", sum(x, y));
    printf("the value of x and y after calling the function is %d and %d\n",x,y);
    return 0;
}

int sum(int a, int b)
{
    int c = a+b;
    a=1244;
    b=3432;
    return c;
}