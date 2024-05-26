#include <stdio.h>

int sumnat(int a);

int main(){
    int x;
    printf("ENTER A NUMBER : \n");
    scanf("%d",&x);
    if(x<=0){
        printf("ENTERED NUMBER IS NOT A NATURAL NUMBER \n");
    }
    else{
        printf("THE SUM OF FIRST %d NATURAL NUMBER IS %d \n",x,sumnat(x));
    }
    return 0;
}
int sumnat(int a){
    if(a==1){
        return 1;
    }
    else{
        return (a + sumnat(a-1));
    }
}