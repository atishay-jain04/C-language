// checking whether a student is pass or fail
#include <stdio.h>

int main(){
    int maths;
    int physics;
    int chemistry;
    int total;
    printf("Enter percentage of Mathematics :\n");
    scanf("%d",&maths);
    printf("Enter percentage of physcs :\n");
    scanf("%d",&physics);
    printf("Enter percentage of chemistry : \n");
    scanf("%d",&chemistry);
    total=(maths + chemistry + physics)/3;
    if(maths>=33 && chemistry>=33 && physics>=33 && total>=40){
        printf("YOU PASSED");
    }
    else if(maths<32 || chemistry<33 || physics<33 || total<40){
        printf("YOU FAILED");
    }
}