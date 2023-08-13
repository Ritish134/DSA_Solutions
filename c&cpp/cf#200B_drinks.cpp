#include <iostream>
using namespace std;

int main(){
    double res=0;
    int n;
    cin>>n;
    int k=n;
    while(n--){
        int a;
        cin>>a;
        res = res+ a;
    }
    cout << res/k;
}
