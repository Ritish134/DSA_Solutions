#include <iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin >>a>>b;
        if(a%b == 0){
            cout << 0 <<endl;
        }
        else{
            
        cout << b-(a%b) << endl;
        }
    }
}
