#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();

int main()
{
    goodmorning();
    return 0;
}
void goodmorning()
{
    printf("GOOD MORNING\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("GOOD AFTERNOON\n");
    goodevening();
}
void goodevening()
{
    printf("GOOD EVENING\n");
}