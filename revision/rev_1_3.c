#include<math.h>
#include<stdio.h>
int main(){
    int x1,x2,y1,y2;
    printf("enter X1:");
    scanf("%d",&x1);
    printf("enter y1:");
    scanf("%d",&y1);
    printf("enter x2:");
    scanf("%d",&x2);
    printf("enter y2:");
    scanf("%d",&y2);
    float dis=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("the distance between (%d,%d)and (%d,%d) is %f",x1,y1,x2,y2,dis);
    return 0;
}