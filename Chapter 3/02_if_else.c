#include <stdio.h>

int main(){
    int age;
    printf("Enter your age : \n");
    scanf("%d",&age);
    if(age<18){
        printf("YOU ARE BELOW 18, YOU CANNOT DRIVE\n");
    }
    else{
        printf("YOU CAN DRIVE\n");
    }
    if(age==50){
        printf("HALF CENTURY\n");
    }
    return 0;
}