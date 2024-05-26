#include <stdio.h>

int main(){
    int n;
    printf("ENTER THE VALUE OF n :\n");
    scanf("%d",&n);
    printf("The first n natural number in reverse order is :-\n");
    for(int i=n;i;i--){
        printf("%d\n",i);
    }
    return 0;
}