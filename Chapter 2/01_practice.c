#include <stdio.h>

int main(){
    int a ;
    printf("Enter the number: ");
    scanf("%d",&a);
    int check = a % 97;
    printf("%d", check);
    return 0;
}