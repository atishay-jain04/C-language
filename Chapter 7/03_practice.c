#include <stdio.h>

int main(){
    int n;
    printf("enter the number : \n");
    scanf("%d",&n);
    int table[10];
    printf("the table of %d is :-\n",n);
    for(int i=0;i<10;i++){
        table[i]=n*(i+1);
        printf("%d X %d = %d\n",n,i+1,table[i]);
    }
    return 0;
}