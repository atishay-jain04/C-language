#include <stdio.h>

int main(){
    int age;
    int vippass;
    printf("ENTER YOUR AGE : \n");
    scanf("%d",&age);
    printf("TYPE '1' IF YOU HAVE VIPPASS AND '0'IF YOU DON'T HAVE \n");
    scanf("%d",&vippass);
    if((age<=70 && age>=18) || !(vippass==0)){
        printf("YOU CAN DRIVE\n");
    }
    else{
        printf("YOU CANNOT DRIVE\n");
    }
    return 0;
}