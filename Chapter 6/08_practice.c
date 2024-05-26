#include <stdio.h>

int main(){
    int i=345;
    int *ptr;
    int **ptr_ptr;

    ptr= &i;
    ptr_ptr= &ptr;
    printf("THE VALUE OF i IS : %d",**ptr_ptr);
    return 0;
}