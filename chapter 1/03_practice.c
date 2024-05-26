#include <stdio.h>

int main(){
    float c,f;
    printf("Enter the temperature in celsius \n");
    scanf("%f",&c);
    f=c*1.8;
    printf("the temperature in fahrenheit is %f \n", f+32);
    return 0;
}