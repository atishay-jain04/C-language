#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a\n: ");
    scanf("%d",&a);
    printf("enter the value of b\n: ");
    scanf("%d",&b);
    printf("before interchanging values\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("after interchanging values\n");
    c=a;
    a=b;
    b=c;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}