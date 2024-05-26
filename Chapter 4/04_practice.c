#include <stdio.h>

int main(){
    int i=1;
    int n,sum;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Sum of multipication table of %d is ",n);
    do{
        int a = n*i;
        sum += a;
        i++;
    }while(i<=10);
    printf("%d",sum);
    return 0;
}