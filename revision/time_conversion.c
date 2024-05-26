#include <stdio.h>

int main()
{
    int seconds;
    printf("ENTER THE TIME IN SECONDS:\n");
    scanf("%d",&seconds);
    int hour=seconds/3600;
    int sec_remain=seconds%3600;
    int min= sec_remain/60;
    sec_remain%=60;
    printf("%d seconds is %d hour %d minutes %d sec",seconds,hour,min,sec_remain);
    return 0;
}