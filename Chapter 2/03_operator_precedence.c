#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    /*1st priority operators are (*),(/),(%)
    2nd priority operators are (+),(-)
    3rd priority operators is (=) */
    printf("the value of 3*x - 8*y is %d \n", 3 * x - 8 * y);
    printf("the value of 8*y/3*x is %d \n", 8*y/3*x);
    // 8*y/3*x will give wrong answer as priority of(*) and (/) is same you should use parenthesis
    printf("the value of 8*y/3*x is %d \n", (8*y)/(3*x));
    return 0;
}