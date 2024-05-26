#include <stdio.h>

int main(){
    int i=42,*j=&i;
    printf("the address of i is %u\n",j);
    printf("the value of i is %d\n",*j);
}