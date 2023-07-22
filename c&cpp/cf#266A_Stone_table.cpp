#include <iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cin >> n;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=1;
    while(j<=sizeof(a) && i < sizeof(a)){
        if(a[i]==a[j]){
            count++;
        }
        i++;
        j++;
    }
    cout <<count;
}
