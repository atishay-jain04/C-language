#include <stdio.h>
void display();// function prototype

int main(){
    printf("intializing the display function\n");
    display();// calling the function
    printf("display finished its work\n");
    return 0;
}
//defining the function
void display(){
    printf("THIS IS DISPLAY\n");
}