#include <stdio.h>

int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *ptr=&arr[0];
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+2));
    return 0;
}