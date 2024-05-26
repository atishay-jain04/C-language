#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    printf("The factorial of %d is\n", n);
     int factorial = 1;
    for (int i = 1; i<=n; i++)
    {
       
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}