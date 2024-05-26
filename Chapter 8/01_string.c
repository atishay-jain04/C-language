#include <stdio.h>

int main(){
    char str[]="ATISHAY";
    // char str[]={'A','T','I','S','H','A','Y','\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}