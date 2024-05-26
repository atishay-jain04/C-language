#include <stdio.h>

int main(){
    int i=10;
    int n;
    printf("enter a number :\n");
    scanf("%d",&n);
    printf("Multipication table of %d in reverse order :\n",n);
    do{
        int a = i*n;
        printf("%d X %d = %d\n",n,i,a);
        i--;
    }while(i);
    return 0;
}