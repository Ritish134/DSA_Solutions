// #include <Stdio.h>

// int main(){
//     int n,count=0,ans=0;
//     scanf("%d",&n);
//     int arr[3*n];
//     for(int i=0;i<3*n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//          count = 0;
//         for(int j=3*i;3*i<=j<3*n-i-3;j++){
//             if(arr[j]==1){
//                 count++;
//             }
//         }
//         if(count>1){
//             ans++;
//         }
           
//     }
//     printf("%d",ans);
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c,ans=0;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>=2){
            ans++;
        }
    }
    printf("%d",ans);
}