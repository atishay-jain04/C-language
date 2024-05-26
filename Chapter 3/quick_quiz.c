#include <stdio.h>

int main(){
    int marks;
    printf("ENTER YOUR MARKS : \n");
    scanf("%d",&marks);
    if(marks<=100 && marks>90){
        printf("YOUR GRADE IS 'A'\n");
    }
    else if(marks<=90 && marks>80){
        printf("YOUR GRADE IS 'B'\n");
    }
    else if(marks<=80 && marks>70){
        printf("YOUR GRADE IS 'C'\n");
    }
    else if(marks<=70 && marks>60){
        printf("YOUR GRADE IS 'D'\n");
    }
    else if(marks<=60 && marks>50){
        printf("YOUR GRADE IS 'E'\n");
    }
    else if(marks<=50 && marks>0){
        printf("YOUR GRADE IS 'F'\n");
    }
    else{
        printf("INVALID MARKS\n");
    }
}