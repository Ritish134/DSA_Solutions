#include <iostream>
using namespace std;

int main(){
    int n;
    int max=0,c=0;
    cin >> n;
    while(n--){
        int a,b;
        cin>>a>>b;
        c+=b;
        c = c-a;
        if(c>max){
            max=c;
        }
    }
    cout << max;
}
