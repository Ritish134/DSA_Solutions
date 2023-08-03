#include <iostream>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    string s;
    cin >>s;
    while(p--){
    for(int i=1;i<n;i++){
        if(s[i]=='G'&&s[i-1]=='B'){
            s[i] = 'B';
            s[i-1] = 'G';
            i++;
             }
         }
    }
    

    cout <<s;
}
