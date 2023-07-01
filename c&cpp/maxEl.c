#include <stdio.h>

int main(){
    int arr[5] = {1000,9,0, -11,-120};
    int n = sizeof(arr)/sizeof(arr[0]);
    int  max = arr[0];
    int min = arr[0];
    for(int i= 0;i<n-1;i++){
        if(arr[i+1]>max)
            max = arr[i+1];
        else if(arr[i+1]<min)
            min = arr[i+1];  
    }
    printf("max is %d , min is %d",max,min);
}