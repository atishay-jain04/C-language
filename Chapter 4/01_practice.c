#include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("enter the number number :\n");
    scanf("%d",&n);
    printf("multipication table of %d is\n",n);
    while(i<=10){
        int a = n*i;
        printf("%d X %d = %d\n",n,i,a);
        i++;
    }
    return 0;
}