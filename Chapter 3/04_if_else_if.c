#include <stdio.h>

int main(){
    int num;
    printf("ENTER YOUR NUMBER : \n");
    scanf("%d",&num);
    if(num==1){
        printf("YOUR NUMBER IS 1\n");
    }
    else if(num==2){
        printf("YOUR NUMBER IS 2\n");
    }
    else if(num==3){
        printf("YOUR NUMBER IS 3\n");
    }
    else{
        printf("IT'S NOT 1 ,2 OR 3\n", num);
    }
    return 0;
}