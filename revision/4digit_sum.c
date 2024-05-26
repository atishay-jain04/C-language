#include <stdio.h>

int main(){
    int digit;
    printf("enter the 4 digit number :\n");
    scanf("%4d",&digit);
    if(digit<1000){
        printf("your number is not a 4 digit number");
    }
    else{
    int a = digit/1000;
    int b = (digit%1000)/100;
    int c = (digit%100)/10;
    int d = digit%10;
    int sum = a+b+c+d;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    printf("d = %d\n",d);
    printf("the sum of the digits of %d is %d",digit,sum);}
    return 0;
}