#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    for(int i=0;i<100;i++){
        a *=3;
        b *=2;
        if(a > b){
            cout << i+1;
            break;
        }
        else{
            continue;
        }
    }
}
