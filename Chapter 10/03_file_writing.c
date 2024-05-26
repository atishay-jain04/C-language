#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sample3.txt","w");
    int num=784;
    fprintf(ptr,"this number is %d",num);
    fclose(ptr);
    return 0;
}