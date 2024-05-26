#include <stdio.h>

float temp(float a);

int main(){
    float x;
    printf("ENTER THE TEMPERATURE IN CELSIUS : \n");
    scanf("%f",&x);
    printf("THE TEMPERATURE %f CELSIUS IS %f FAHRENHET\n",x,temp(x));
    return 0;
}

float temp(float a){
    float F= (a*9/5) + 32;
    return F;
}