#include <stdio.h>

void ten(int *a);

int main(){
    int x;
    printf("ENTER A VALUE : \n");
    scanf("%d",&x);
    ten(&x);
    printf("%d",x);
    return 0;
}

void ten(int *a){
    int b = *a;
    *a = 10*b;
}