#include <stdio.h>

void printpattern(int n);

int main(){
    int a;
    printf("enter the number of line you want to print : ");
    scanf("%d",&a);
    printpattern(a);
    return 0;
}

void printpattern(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}