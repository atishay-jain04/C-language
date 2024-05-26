#include <stdio.h>
int counti(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
                if(arr[i]>0){
            c++;
        }
    }
    return c;
    }
int main(){
    int arr[]={-45,78,65,-54,-85,44,56,85,-95,75,-75};
    int a=counti(arr,11);
    printf("number of positive num in array is %d",a);
    return 0;
}