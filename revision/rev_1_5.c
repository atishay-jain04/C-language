#include <stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int a=1;
   for(int i=num;i>=1;i--){
    for(int j=0;j<i;j++){
        
        printf("%d ",i);
        a++;
    }
    printf("\n");
   }
    return 0;
}