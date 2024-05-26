#include <stdio.h>

int main(){
    int i=1;
    int n;
    int a = 0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("the sum of first %d natural number is : ",n);
    while(i<=n){
        a=a+i;
        i++;
    }
    printf("%d",a);
    return 0;
}