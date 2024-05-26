#include <stdio.h>

void sum_avg(int a,int b,int*sum, float *avg){
    *sum=a+b;
    *avg= (float)*sum/2;
}

int main(){
    int x,y,sum;
    float avg;
    printf("ENTER THE FIRST NUMBER :\n");
    scanf("%d",&x);
    printf("ENTER THE SECOND NUMBER :\n");
    scanf("%d",&y);
    sum_avg(x,y,&sum,&avg);
    printf("THE SUM OF TWO NUMBER IS %d\n",sum);
    printf("THE AVERAGE OF TWO NUMBER IS %f\n",avg);
    return 0;
}