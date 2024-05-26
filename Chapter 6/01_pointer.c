#include <stdio.h>

int main(){
    int i=34;
    int *j=&i;
    printf("the value of i = %d\n",i);
    printf("the value of i = %d\n",*j);
    printf("the value of i = %d\n",*(&i));
    printf("the address of i = %u\n",&i);
    printf("the address of i = %u\n",j);
    printf("the address of j = %d\n",&j);
    return 0;
}