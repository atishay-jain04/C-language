#include <stdio.h>
int main(){
    int or_sec,sec,hour,min,remainder;
    printf("ENTER THE tIME IN SECONDS:");
    scanf("%d",&or_sec);
    hour=or_sec/3600;
    remainder=or_sec%3600;
    min=remainder/60;
    sec=remainder%60;
    printf("THE %d SECONDS ARE %d:%d:%d\n",or_sec,hour,min,sec);
    return 0;
}