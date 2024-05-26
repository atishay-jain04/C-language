#include <stdio.h>

int main(){
    //97-122 = a-z
    //65-90 = A-Z
    char ch;
    printf("TYPE THE CHARACTER :\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("ENTERED CHARACTER IS LOWERCASE CHARACTER\n");
    }
    else if(ch>=65 && ch<=90){
        printf("ENTERED CHARACTER IS UPPERCASE CHARACTER\n");
    }
    else{
        printf("INVALID INPUT\n");
    }
    return 0;
}