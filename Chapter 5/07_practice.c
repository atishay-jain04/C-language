#include <stdio.h>

int average(int a,int b, int c);

int main(){
    int x,y,z;
    printf("ENTER THE FIRST NUMBER : \n");
    scanf("%d",&x);
    printf("ENTER THE SECOND NUMBER : \n");
    scanf("%d",&y);
    printf("ENTER THE THRID NUMBER : \n");
    scanf("%d",&z);
    printf("THE AVERAGE OF %d,%d and %d IS %d\n",x,y,z,average(x,y,z));
    return 0;
}

int average(int a,int b,int c){
    int sum = a + b + c;
    int result = sum/3; 
    return result;
}