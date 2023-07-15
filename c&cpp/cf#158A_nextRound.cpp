#include <stdio.h>
 
int main(){
    int n,k,ans=0;
    scanf("%d %d",&n,&k);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            ans++;
        }
    }
    printf("%d",ans);
}
