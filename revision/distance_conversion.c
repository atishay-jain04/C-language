#include <stdio.h>

int main(){
    float mm,cm,inche,feet;
    printf("ENTER THE DISTANCE(mm):\n");
    scanf("%f",&mm);
    cm=mm/10;
    inche=cm/2.5;
    feet=inche/12;
    printf("%f mm is\n%f cm\n%f inche\n%f feet",mm,cm,inche,feet);
    return 0;
}