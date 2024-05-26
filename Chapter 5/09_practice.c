#include <stdio.h>

float force(float m);

int main(){
    float a;
    printf("ENTER THE MASS OF THE BODY(IN KILOGRAMS) : \n");
    scanf("%f",&a);
    printf("THE FORCE EXERTED BY EARTH ON BODY OF MASS %f KG IS %f N\n",a,force(a));
    return 0;
}

float force(float m){
    float x = (m*9.8);
    return x;
}