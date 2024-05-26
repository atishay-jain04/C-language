#include <stdio.h>

void function(int a);
int main(){
    int x = 5;
    function(x);
    printf("the address of x after function is %u\n",&x);
    printf("%d",x);
    return 0;
}

void function(int a){
   printf("the address of given variable is %u\n",&a);

}