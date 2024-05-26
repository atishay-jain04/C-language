#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num,n,i=1;
    srand(time(0));
    num=rand()%100+1;
    while(n!=num){
        printf("GUESS THE NUMBER BETWEEN 1 TO 100\n");
        scanf("%d",&n);
        if(n<num){
            printf("HIGHER NUMBER PLEASE\n");
        }
        else if(n>num){
            printf("LOWER NUMBER PLEASE\n");
        }
        i++;
    }
    printf("CONGRATULATION! YOU GUESSED THE CORRECT NUMBER IN %d ATTEMPT",i);
}