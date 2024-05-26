#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sample2.txt","r");
    if(ptr==NULL){
        printf("this file deos not exist");
    }
    else{
    int num;
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("the number in file is %d\n",num);
    }
    return 0;
}