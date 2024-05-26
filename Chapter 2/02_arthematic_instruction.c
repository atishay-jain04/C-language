#include <stdio.h>
#include <math.h>

int main(){
    int a = 4;
    int b = 8;
    printf("the value of a + b is %d \n", a + b);
    printf("the value of a - b is %d \n", a - b);
    printf("the value of a * b is %d \n", a * b);
    printf("the value of a / b is %d \n", a / b);
    int z;
     z = a * b; // is legal
    // a * b = z is illegal
    printf("the value of z is %d \n", z);
    printf("when 21424 is divided by 12 leaves the reminder of %d \n", 21424 % 12);
    printf("when -21424 is divided by 12 leaves the reminder of %d \n", -21424 % 12);
    printf("when 21424 is divided by -12 leaves the reminder of %d \n", 21424 % -12);
    // no operator is assumed to be present
    //printf("the value of 4 * 5 is %d", (4)(5));---> will not return 20/ it is wrong!
    printf("the value of 4 * 5 is %d", (4)*(5));// proper operator should be use
    //there is no operator to perform expontiation in C
    printf("the value of 4 ^ 5 is %d \n", 4 ^ 5);//---> will not produce 4 to the power 5
    printf("the value of 4 to the power 5 is %f \n", pow( 4, 5));// to use pow() function you should include <math.h> library
    // type conversion
    // int and int-----> int
    // float and float -----> float
    // float and int ------> float
    printf("the value of 5/2 is %f ",5.0 / 2);
    return 0;
}