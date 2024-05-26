#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("ENTER THE FIRST NUMBER\n");
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER\n");
    scanf("%d", &b);
    printf("ENTER THE THIRD NUMBER\n");
    scanf("%d", &c);
    printf("ENTER THE FOURTH NUMBER\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("THE NUMBER %d IS GREATEST AMONG THE FOUR NUMBERS\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("THE NUMBER %d IS GREATEST AMONG THE FOUR NUMBERS\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("THE NUMBER %d IS GREATEST AMONG THE FOUR NUMBERS\n", c);
    }
    else
    {
        printf("THE NUMBER %d IS GREATEST AMONG THE FOUR NUMBERS\n", d);
    }
    return 0;
}