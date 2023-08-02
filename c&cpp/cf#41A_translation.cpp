#include <iostream>
using namespace std;
 
int main(){
    string a,b;
    int flag=-1;
    cin >>a>>b;
    int n= a.size();
    for(int i=0;i<n;i++){
        if(a[i]==b[n-i-1]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
