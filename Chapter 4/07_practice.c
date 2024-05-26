#include <stdio.h>

int main(){
    int i=2,n,prime;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    for(i;i<n;i++){
        if(n%i==0){
            prime=1;
            break;
        }
        else{prime!=1;}
    }
    if(prime==1){
        printf("%d is not a prime number",n);
    }
    else{printf("%d is a prime number",n);}
    return 0;
}