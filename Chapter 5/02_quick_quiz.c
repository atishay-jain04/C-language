#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();

int main(){
    goodmorning();
    goodafternoon();
    goodevening();
    return 0;
}
void goodmorning(){
    printf("GOOD MORNING\n");
}
void goodafternoon(){
    printf("GOOD AFTERNOON\n");
}
void goodevening(){
    printf("GOOD EVENING\n");
}