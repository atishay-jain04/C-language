#include <stdio.h>

int main(){
    float SI,P,R,T;
    printf("enter the principle \n");
    scanf("%f",&P);
    printf("enter the Interest Rate per annum \n");
    scanf("%f",&R);
    printf("enter the Time period in years \n");
    scanf("%f",&T);
    SI= (P*R*T)/100;
    printf("the Simple Interest is %f \n",SI);
    return 0;
}