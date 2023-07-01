#include <stdio.h>

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j =n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}