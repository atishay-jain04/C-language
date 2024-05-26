#include<stdio.h>
int main(){
    int num,a,b,c,d,sum;
    printf("enter a 4 digit number : ");
    scanf("%4d",&num);
    a=num/1000;
    b=(num%1000)/100;
    c=(num%100)/10;
    d=num%10;
    sum=a+b+c+d;
    printf("the sum of digit of number %d is %d",num,sum);
    return 0;
}