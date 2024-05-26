#include <stdio.h>
int sum(int a,int b);

int main(){
    int x,y;
    printf("ENTER THE FIRST NUMBER :\n");
    scanf("%d",&x);
    printf("ENTER THE VALUE OF SECOND NUMBER :\n");
    scanf("%d",&y);
    int c= sum(x,y);
    printf("THE SUM OF TWO NUMBER IS %d\n",c);
    return 0;
}
int sum(int a,int b){
    int result;
    result = a + b;
    return result;
}