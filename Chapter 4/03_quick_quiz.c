#include <stdio.h>

int main(){
    int i = 1;
    int n;
    printf("ENTER THE VALUE OF n:\n");
    scanf("%d",&n);
    printf("The first n natural number are :\n");
    for(i;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}