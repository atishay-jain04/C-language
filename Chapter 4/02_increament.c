#include <stdio.h>

int main(){
    int i = 5;
    printf("the value of i++ is %d\n",i++);// it first prints then increase the value
    printf("the value of i is %d\n",i);
    printf("the value of ++i is %d\n",++i);// it first increase then print the value
    printf("the value of i is %d\n",i);
    printf("the value of i-- is %d\n",i--);// it first prints then decrease the value
    printf("the value of i is %d\n",i);
    printf("the value of --i is %d\n",--i);// it first decrease then print the value
    printf("the value of i is %d\n",i);
    return 0;
}