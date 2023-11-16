#include<stdio.h>

void SelectionSort(int arr[],int n){
  for(int i=0;i<n;i++){
    int curr_min = i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[curr_min])
          curr_min = j;
    }
  int temp = arr[i];
  arr[i] = arr[curr_min];
  arr[curr_min] = temp;
    }
}

int main(){
  int arr[5] = {2,5,1,7,3};
  SelectionSort(arr,5);
  for(int i=0;i<5;i++){
    printf("%d ", arr[i]);
  }
}
  
