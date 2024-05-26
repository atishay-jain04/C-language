#include <stdio.h>

int main(){
    int i=1,n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    printf("The factorial of %d is ",n);
    while(n){
        i*=n;
        n--;
    }
    printf("%d",i);
}