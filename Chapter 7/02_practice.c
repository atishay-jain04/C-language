#include <stdio.h>

int main(){
    int table5[10];
    for(int i=0;i<10;i++){
        table5[i]=5*(i+1);
        printf("5 X %d = %d\n",i+1,table5[i]);
    }
    return 0;
}