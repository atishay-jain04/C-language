#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a,int *b);

int main(){
    int x=23,y=32;
    printf("The value of x and y before wrong_swap function is %d and %d\n",x,y);
    wrong_swap(x,y);
    printf("The value of x and y after wrong_swap function is %d and %d\n",x,y);
    printf("The value of x and y before swap function is %d and %d\n",x,y);
    swap(&x,&y);
    printf("The value of x and y after swap function is %d and %d\n",x,y);
    return 0 ;
}

void wrong_swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}