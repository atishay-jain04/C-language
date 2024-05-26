#include <stdio.h>

int main(){
    int num;
    int check=0;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==0 ||num==1){
        printf("%d is not a prime number",num);
    }
    else if(num==2 ||num==3){
     printf("%d is a prime number",num);
    }
    
    else{
        for(int i=2;i<=(num/2);i++){
            if(num%i==0){
                check=1;
                break;
            }
           }
           if(check==1){
            printf("%d is not a prime number",num);
           }
           else{
            printf("%d is a prime number",num);
           }
    }
    return 0;
}