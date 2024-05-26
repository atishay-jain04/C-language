#include <stdio.h>

int fibo(int n);

int main()
{
    int x;
    printf("ENTER A NUMBER : \n");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("THE %dst ELEMENT OF FIBONACHI SERIES IS %d\n", x, fibo(x));
    }
    else if (x == 2)
    {
        printf("THE %dnd ELEMENT OF FIBONACHI SERIES IS %d\n", x, fibo(x));
    }
    else if (x == 3)
    {
        printf("THE %drd ELEMENT OF FIBONACHI SERIES IS %d\n", x, fibo(x));
    }
    else
    {
        printf("THE %dth ELEMENT OF FIBONACHI SERIES IS %d\n", x, fibo(x));
    }
    return 0;
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
