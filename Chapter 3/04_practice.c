// Checking the leap year
#include <stdio.h>

int main(){
    int year;
    printf("ENTER THE YEAR :\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)|| year%400==0){
        printf("YEAR %d IS A LEAP YEAR\n",year);
    }
    else{
        printf("YEAR %d IS NOT A LEAP YEAR\n",year);
    }
    return 0;

}