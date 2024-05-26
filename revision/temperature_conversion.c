#include <stdio.h>

int main(){
    char select;
    float cel,fah;
    float con;
    printf("please enter 'C' and 'F' for celsius to fahrenheit and fahrenheit to celsiusrespectivily\n");
    scanf("%1s",&select);
    if(select=='C'){
        printf("please enter the temperature : \n");
        scanf("%f",&cel);
        con=(9*cel)/5+32;
        printf("%f celsius is %f fahrenhiet",cel,con);
    }
    else if(select=='F'){
        printf("please enter the temperature : \n");
        scanf("%f",&fah);
        con=(fah-32)*5/9;
        printf("%f fahrenhiet is %f celsius",fah,con);
    }
    else{
        printf("YOU HAVE ENTERED A WRONG INPUT\n");
    }
    return 0;
}