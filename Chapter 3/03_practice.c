// calculating the tax paided a citizen
#include <stdio.h>

int main(){
    float salary;
    printf("ENTER YOUR ANNUAL SALARY\n");
    scanf("%f",&salary);
    if(salary>=250000 && salary<500000){
        printf("TOTAL TAX PAYED BY YOU TO GOVERNMENT : %f\n",salary*0.05);
    }
    else if(salary>=500000 && salary<1000000){
        printf("TOTAL TAX PAYED BY YOU TO GOVERNMENT : %f\n",salary*0.20);
    }
    else if(salary>=1000000){
        printf("TOTAL TAX PAYED BY YOU TO GOVERNMENT : %f\n",salary*0.30);
    }
    else{
        printf("NO TAX");
    }
    return 0;
}