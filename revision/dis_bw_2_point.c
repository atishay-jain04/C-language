#include <stdio.h>
#include <math.h>

int main(){
    int x,y,X,Y;
    printf("enter x1 : \n");
    scanf("%d",&x);
    printf("enter y1 : \n");
    scanf("%d",&y);
    printf("enter x2 : \n");
    scanf("%d",&X);
    printf("enter y2 : \n");
    scanf("%d",&Y);
    float dis = sqrt(pow((X-x),2) +pow((Y-y),2));
    printf("distance between (%d,%d) and (%d,%d) is %f",x,y,X,Y,dis);
    return 0;
}