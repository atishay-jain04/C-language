#include <stdio.h>

int main(){
    float pie=3.14;
    float r,h;
    printf("enter the radius \n");
    scanf("%f",&r);
    float area=2*pie*r;
    printf("Area of circle is %f \n",area);
    printf("enter the height \n");
    scanf("%f",&h);
    float vol=2*pie*r*h;
    printf("the volume of cylinder is %f \n",vol);
    return 0;
}